#include <stdio.h>
void merge2arrays(int A[],int a, int b,int c,int n) {
    int i = a; int j = b + 1;
    while ( i< j && j <= c ) {
        if ( A[i] < A[j] ) i++;
        else{
            int temp = A[j];
            for (int k = j - 1; k >= i; k--) A[k+1] = A[k];
            A[i] = temp;
            for (int l = 0; l < n; l ++) {
                printf("%d ",A[l]);
            }
            printf("\n");
            i++;j++;
        }
    }
}

void splitandmerge(int A[], int left, int right,int n) {
    if (left >= right) return;
    int m = (left + right)/2;
    splitandmerge(A,left,m,n);
    splitandmerge(A,m+1,right,n);
    merge2arrays(A,left,m,right,n);
}

void mergesort(int A[],int n) {
    splitandmerge(A,0,n-1,n);
}

int main (){
    int A[] = {14,12,13,15,17,11,16};
    int n = 7;
    for (int l = 0; l < n; l ++) {
        printf("%d ",A[l]);
    }
    printf("\n");
    mergesort(A,n);
    return 0;
}

