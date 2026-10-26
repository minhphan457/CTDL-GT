#include <stdio.h>

void arraytoabsolute(int A[],int n) {
    int i = 0;
    while ( A[i] < 0 ) {
        A[i] = - A[i];
        int j = i;
        while ( A[j + 1] < A[j]){
            int temp = A[j + 1];
            A[j + 1] = A[j];
            A[j] = temp;
            j++;
        }
        i++;
    }
} 
void countdistinctabsolutevalue(int A[],int n) {
    arraytoabsolute(A,n);
    int count = 0;
    for ( int i = 1; i < n; i++) if ( A[i] != A[i-1]) count++;
    printf("The total number of distinct absolute values is %i (",count);
    for ( int i = 1; i < n; i++) if ( A[i] != A[i-1]) printf("%i ", A[i]);
    printf(")");
    return;
}
int main() {
    int A[] = { -2, -1, 0, 1, 2, 3 };
    int n = sizeof(A)/sizeof(A[0]);
    countdistinctabsolutevalue(A,n);
    return 0;
}