#include <stdio.h>
int main () {
    int n;
    scanf("%d",&n);
    int A[n];
    for ( int i = 0; i < n ; i ++ ) scanf("%i", &A[i]);
    for ( int i = 0; i < n; i++ ) printf("%i ", A[i]);
    printf("\n");
    for ( int i = 1; i < n; i++) {
    int index = i;
    while ( index > 0 && ( A[index] < A[index-1] )) {
        int temp = A[index];
        A[index] = A[index - 1];
        A[index - 1] = temp;
        index --;
    }
    for ( int j = 0; j < n ; j ++ ) printf("%i ", A[j]);
    printf("/n");
    }
    return 0;
} 

