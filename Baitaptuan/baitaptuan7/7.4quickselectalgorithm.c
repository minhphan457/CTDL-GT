#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
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
            i++;j--;
        }
    }
    swap(&A[left], &A[j]);
    partition(A, left, j - 1, n);
    partition(A, j + 1, right, n);
}

void quicksort(int A[], int n) {
    partition(A, 0, n - 1, n);
}

int main() {
    int A[] = {7, 4, 6, 3, 9, 1};
    int k  = 2;
    int n = sizeof(A)/sizeof(A[0]);
    quicksort(A,n);
    printf(" k'th smallest array element is %i ",A[k - 1] );
    return 0;
}