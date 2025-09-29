/*
Q77: Check if the elements on the diagonal of a matrix are distinct.
*/
#include <stdio.h>
int main() {
    int r,c,flag=1;
    scanf("%d %d",&r,&c);
    int a[r][c], d[r<c?r:c], k=0;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<r && i<c;i++) d[k++]=a[i][i];
    for(int i=0;i<k;i++)
        for(int j=i+1;j<k;j++)
            if(d[i]==d[j]) flag=0;
    if(flag) printf("True");
    else printf("False");
    return 0;
}
