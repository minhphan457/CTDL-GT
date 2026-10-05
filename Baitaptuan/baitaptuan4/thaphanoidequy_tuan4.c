// 3 cây đinh A,B,C và n đĩa. Di chuyển các đĩa từ A sang C với B là trung gian
#include <stdio.h>
int main () {
    int n;
    void thapHaNoi ( int n1, char truoc, char sau, char trunggian ) {
        if ( n == 1) {
            printf("Chuyen mot dia tu dinh %c sang %c",truoc, sau);
        }
        thapHaNoi( n1 - 1,truoc,sau,trunggian);
        printf("Chuyen mot dia tu dinh %c sang %c",truoc, sau);
        thapHaNoi( n1 - 1,trunggian,sau,truoc);
    }
    scanf("%d",&n);
    thapHaNoi(n,'A','B','C');
    return 0;
}