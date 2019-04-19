#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void bubblesort(int *arr, const int K){
    int i, j;
    for(i = 0; i < K - 1; ++i){
        for(j = 0; j < K - 1; ++j){
            if(arr[j] > arr[j + 1]){
                int buf = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = buf;
            }
        }
    }
}

int main()
{
    const int K = 5, P = 10;
    int arrA[K] = {10, 8, 6, 4, 2};
    int arrB[K] = {9, 7, 5, 3, 1};
    int arrC[P];
    int i, k = 0;
    for(i = 0; i < K; ++i){
        arrC[k++] = arrA[i];
        arrC[k++] = arrB[i];
    }
    bubblesort(arrC, P);
    for(i = 0; i < P; ++i){
        printf("Arr: %d ", arrC[i]);
    }
    printf("\n");
}
