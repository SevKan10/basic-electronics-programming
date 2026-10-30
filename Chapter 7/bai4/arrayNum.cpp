#include <stdio.h>
#include <stdlib.h>

void enterElements(int *a, int n){
    if (n > 0){
        printf("Enter number 1: ");
        scanf("%d", a);
    }
    for (int i = 1; i < n; i++){
        do
        {
            printf("Enter element %d: ", i+1);
            scanf("%d", a + i);
            if (*(a + i) <= *(a + i - 1)){
                printf("Please enter number greater than previouse number!\n");
            }
            
        } while (*(a + i) <= *(a + i - 1));
    }
}

void printEle(int *a, int n){
    printf("Numbers: ");
    for (int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
}


void insertNum(int *a, int n){
    int x;
    printf("Enter number insert"); scanf("%d", &x);

    int i = n - 1;
    while (i >= 0 && *(a + i) > x){
        *(a + i + 1) = *(a + i);
        i--;
    }
    *(a + i + 1) = x;
    n++;
    printEle(a, n);
    
}


int main(){
    int *arr,  n;

    printf("Enter elements number: "); scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));

    if (arr == NULL)    {printf("Memory allocation failed!]n"); return 1;}

    enterElements(arr, n);
    printEle(arr, n);
    insertNum(arr, n);

    free(arr);
    arr = NULL;

    return 0;
}