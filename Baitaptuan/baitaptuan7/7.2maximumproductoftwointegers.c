#include <stdio.h>
void insertionsort(int A[], int n) {
    for ( int i = 1; i < n; i++) {
    int index = i;
    while ( index > 0 && ( A[index] < A[index-1] )) {
        int temp = A[index];
        A[index] = A[index - 1];
        A[index - 1] = temp;
        index --;
    }
    }
    return;
}
int main(){
    int A[]= {2,6,-3,7,1,-8,9,0};
    int n = sizeof(A)/sizeof(A[0]);
    insertionsort(A,n);
    ( A[0] * A[1] > A[n-1]*A[n-2])?  printf("Pair is (%i;%i)",A[0],A[1]) : printf("Pair is (%i;%i)",A[n-2],A[n-1]);
    return 0;
}