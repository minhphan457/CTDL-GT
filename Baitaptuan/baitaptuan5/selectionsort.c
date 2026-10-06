//selectionsort
#include <stdio.h>
int main() {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    int A[n], index;
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);
    for (int i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\n");
    for (int i = 0; i < n - 1; i++) {
        index = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[index]) index = j;
        }
        if (index != i) {
            int temp = A[i];
            A[i] = A[index];
            A[index] = temp;
        }
        for (int k = 0; k < n; k++) printf("%d ", A[k]);
        printf("\n");
    }

    return 0;
}
