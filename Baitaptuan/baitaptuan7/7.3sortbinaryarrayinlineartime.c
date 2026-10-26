#include <stdio.h>
void sortbinaryarray(int A[],int n){
    int zeroes = 0;
    for ( int i = 0; i < n; i++) if (A[i] == 0 ) zeroes++;
    for ( int i = 0; i < n; i++) {
        if ( i < zeroes ) A[i] = 0;
        else A[i] = 1;
    }
    return;
}

int main(){
    int A[] = {1,0,1,0,0,0,1,1,0,1,1};
    int n = sizeof(A)/sizeof(A[0]);
    sortbinaryarray(A,n);
    for ( int i = 0; i < n; i++) printf("%i ",A[i]);
    return 0;
}