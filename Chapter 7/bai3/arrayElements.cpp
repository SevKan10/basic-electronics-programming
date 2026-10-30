#include <stdio.h>
#include <stdlib.h>

void enterElements(int *a, int n){
    for (int i = 0; i < n; i++){
        printf("Enter elements %d: ", i+1);
        scanf("%d", a + i);
    }
}

void printArray(int *a, int n){
    printf("Numbers: ");
    for (int i = 0; i < n; i++){
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void calArray(int *a, int n){
    int max = *a, min = *a, sum = 0;

    for (int i = 0; i < n; i++){
        if (*(a + i) > max){
            max = *(a + i);
        }         
        if (*(a + i) < min){
            min = *(a + i);
        }
        sum += *(a + i);
    }

    printf("Min number: %d\n", min);
    printf("Max number: %d\n", max);
    printf("Sum number: %d\n", sum);

}


int main(){
    int *arr, n;
    printf("Enter the number of elements: "); scanf("%d", &n);

    arr = (int*)malloc(n*sizeof(int));
    
    if(arr == NULL){printf("Memory allocation\n"); return 1;}

    enterElements(arr, n);
    printArray(arr, n);
    calArray(arr, n);
    
    free(arr);
    arr = NULL;
    return 0;
}