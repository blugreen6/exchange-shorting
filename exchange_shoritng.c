#include <stdio.h>

#define N 10

typedef int DataArray[N];

int main() {
    DataArray A; 
    int I, J, temp;

    // Input array
    printf("Masukkan %d elemen array:\n", N); 
    for (I = 0; I < N; I++) { 
        scanf("%d", &A[I]); 
    }

    // Exchange Sort Algorithm
    for (I = 0; I < N - 1; I++) { 
        for (J = I + 1; J < N; J++) { 
            if (A[J] < A[I]) { 
                temp = A[J]; 
                A[J] = A[I]; 
                A[I] = temp; 
            } 
        }
    }

    // output sorted array
    printf("Array setelah diurutkan secara ascending: \n"); 
    for (I = 0; I < N; I++) { 
        printf("%d", A[I]); 
    } 
    printf("\n");

    return 0;
}