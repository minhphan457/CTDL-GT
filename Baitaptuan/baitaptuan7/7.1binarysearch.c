#include <stdio.h>
void binarysearch(int A[], int left, int right,int target){
    if ( left > right ) {
        printf("Element not found!");
        return;
    }
    int index = (left + right)/2; 
    if ( A[index] == target ) {
        printf("Element found at index %i", index);
        return;
    }
    else if ( A[index] > target && index >= 0 ) return binarysearch(A,left,index - 1,target);
    else if ( A[index] < target && index >= 0 ) return binarysearch(A,index+1,right,target);
    if ( left > right ) {
        printf("Element not found!");
        return;
    }
}

int main() {
    int A[]= {3,5,8,9,11,15};
    int n = sizeof(A)/sizeof(A[0]);
    int target = 67;
    binarysearch(A,0,n-1,target);
    return 0;
}