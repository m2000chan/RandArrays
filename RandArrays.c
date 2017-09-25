#include <stdio.h>
#include <stdlib.h>

int main(){
    srand( time(NULL) );
    int arr[10];
    int i;
    for (i = 0; i < 9; i++){
        arr[i] = rand();
        printf("Array element %d: %d\n", i + 1, arr[i]);
    }
    i++;
    arr[9] = 0;
    printf("Array element 10: %d\n", arr[9]);
    int arr2[10];
    int j;
    int *k;
    for (j = 0; j < 10; j++){
        k = &arr[9-j];
        arr2[j] = *k;
        printf("Array 2 element %d: %d\n", j + 1, arr2[j]);
    }
}
