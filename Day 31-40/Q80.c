/*
Q80: Multiply two matrices.
*/
#include <stdio.h>
int main() {
    int r1,c1,r2,c2;
    scanf("%d %d",&r1,&c1);
    int a[r1][c1];
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d",&r2,&c2);
    int b[r2][c2];
    for(int i=0;i<r2;i++)
        for(int j=0;j<c2;j++)
            scanf("%d",&b[i][j]);
    if(c1==r2) {
        int res[r1][c2];
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c2;j++) {
                res[i][j]=0;
                for(int k=0;k<c1;k++)
                    res[i][j]+=a[i][k]*b[k][j];
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
