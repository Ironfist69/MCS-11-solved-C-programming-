#include<stdio.h>
int main () {
    int A[3][3],B[3][3],C[3][3];
    int i,j,k;
    printf("Elements of A");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Elements of B");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            C[i][j]=0;
            for(k=0;k<3;k++) {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    printf("C matrix is: \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d",C[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}