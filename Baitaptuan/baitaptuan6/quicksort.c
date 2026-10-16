#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print(int A[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void partition(int A[], int left, int right, int n) {
    if (left >= right) return;
    int pivot = A[left];
    int i = left + 1;
    int j = right;
    while (i <= j) {
        while (i <= j && A[i] <= pivot) i++;
        while (i <= j && A[j] > pivot) j--;
        if (i < j) {
            swap(&A[i], &A[j]);
            print(A, n);
            i++;j--;
        }
    }
    swap(&A[left], &A[j]);
    print(A, n);
    partition(A, left, j - 1, n);
    partition(A, j + 1, right, n);
}

void quicksort(int A[], int n) {
    partition(A, 0, n - 1, n);
}

int main() {
    int A[] = {75, 70, 65, 84, 98, 78, 100, 93, 55, 61, 81, 68};
    int n = 12;
    quicksort(A,n);
    return 0;
}