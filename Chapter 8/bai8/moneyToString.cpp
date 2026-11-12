/*
8. Viết chương trình đổi số tiền từ số thành chữ.
*/

#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char *digits[] = {
    "không", "một", "hai", "ba", "bốn",
    "năm", "sáu", "bảy", "tám", "chín"
};

const char *scales[] = {
    "", "nghìn", "triệu", "tỷ",
    "nghìn tỷ", "triệu tỷ", "tỷ tỷ"
};

void appendWord(char *result, int maxSize, const char *word) {
    size_t length = strlen(result);
    if (length > 0 && length < (size_t)maxSize - 1) {
        strncat(result, " ", maxSize - length - 1);
    }
    length = strlen(result);
    if (length < (size_t)maxSize - 1) {
        strncat(result, word, maxSize - length - 1);
    }
}

void readThreeDigits(int number, int readHundreds,
                     char *result, int maxSize) {
    int hundreds = number / 100;
    int tens = (number / 10) % 10;
    int units = number % 10;

    if (hundreds > 0 || readHundreds) {
        appendWord(result, maxSize, digits[hundreds]);
        appendWord(result, maxSize, "trăm");
    }

    if (tens > 1) {
        appendWord(result, maxSize, digits[tens]);
        appendWord(result, maxSize, "mươi");
    } else if (tens == 1) {
        appendWord(result, maxSize, "mười");
    } else if (units > 0 && (hundreds > 0 || readHundreds)) {
        appendWord(result, maxSize, "linh");
    }

    if (units > 0) {
        if (tens > 1 && units == 1) {
            appendWord(result, maxSize, "mốt");
        } else if (tens > 0 && units == 5) {
            appendWord(result, maxSize, "lăm");
        } else {
            appendWord(result, maxSize, digits[units]);
        }
    }
}

void moneyToWords(unsigned long long money, char *result, int maxSize) {
    unsigned int groups[7];
    int groupCount = 0;

    result[0] = '\0';
    if (money == 0) {
        appendWord(result, maxSize, digits[0]);
        return;
    }

    while (money > 0) {
        groups[groupCount++] = (unsigned int)(money % 1000);
        money /= 1000;
    }

    for (int i = groupCount - 1; i >= 0; --i) {
        if (groups[i] == 0) {
            continue;
        }

        char groupWords[100] = "";
        readThreeDigits(groups[i], i < groupCount - 1,
                        groupWords, sizeof(groupWords));
        appendWord(result, maxSize, groupWords);
        if (scales[i][0] != '\0') {
            appendWord(result, maxSize, scales[i]);
        }
    }
}

int main() {
    char input[100];
    char *end;
    char result[500];

    printf("Enter the amount: ");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        fprintf(stderr, "Unable to read the amount.\n");
        return 1;
    }

    input[strcspn(input, "\r\n")] = '\0';
    errno = 0;
    unsigned long long money = strtoull(input, &end, 10);
    while (*end != '\0' && isspace((unsigned char)*end)) {
        ++end;
    }

    if (input[0] == '\0' || input[0] == '-' || end == input ||
        *end != '\0' || errno == ERANGE) {
        fprintf(stderr, "Please enter a non-negative integer amount.\n");
        return 1;
    }

    moneyToWords(money, result, sizeof(result));
    printf("%s đồng\n", result);
    return 0;
}