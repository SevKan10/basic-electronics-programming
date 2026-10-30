#include <stdio.h>
#include <stdlib.h>

void enterElements(int *arr, int n){
    for(int i = 0; i < n; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void printElements(int *arr, int n){
    printf("The elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int sortNum(int *arr, int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(*(arr + j) > *(arr + j + 1)){
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
    return 0;
}

int main(){

    int n, *arr, i, j, temp;

    printf("Enter the number of elements: ");   scanf("%d", &n);

    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {printf("Memory allocation failed!\n");  return 1;}

    enterElements(arr, n);
    // printElements(arr, n);
    sortNum(arr, n);
    printElements(arr, n);

    free(arr);
    arr = NULL;
    return 0;
}