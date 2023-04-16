#include<stdio.h>
int main () {
    int A[3][3],B[3][3],result[3][3];
    int i,j,opt;
    printf("Enter elements of matrix A: ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter elements of matrix B: ");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            scanf("%d",&B[i][j]);
        }
    }

    printf("Choose any of these operations below \n");
    printf("1. Addition \n");
    printf("2. Subtraction");

    scanf("%d",&opt);
    switch(opt) {
    case 1:
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                    result[i][j]=A[i][j]+B[i][j];
                    break;
            }
        }
    case 2: 
        for(i=0;i<3;i++) {
            for(j=0;j<3;j++) {
                    result[i][j]=A[i][j]-B[i][j];
                    break;
            }
        }
    default: 
        printf("Invalid option \n");
        return 0;
    }

    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d",result[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}