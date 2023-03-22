#include <stdio.h>

int main () {

    int a_row, a_col, b_row, b_col, c_row, c_col;
    int A[3][3], B[3][3], C[3][3], D[3][3];

    printf ("Enter the elements of matrix A: \n");
    for(int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf ("Enter elements of matrix B: \n");
    for(int i=0; i<3 ; i++) {
        for(int j=0; j<3; j++) {
            scanf ("%d", &B[i][j]);
        }
    }

    printf ("Enter elements of matrix C: \n");
    for(int i=0; i<3 ; i++) {
        for(int j=0; j<3; j++) {
            scanf ("%d", &C[i][j]);
        }
    }

for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
        D[i][j]=0;
        for (int k=0; k<3; k++) {
            D[i][j] += B[i][k] * C[k][j];
            D[i][j] += A[i][j];
        }
    }
}

        printf("The D matrix will be\n");
        for(int i=0; i<3; i++) {
            for(int j=0; j<3; j++) {
                printf("%d", D[i][j]);
            }
            printf("\n");
        }

    system ("pause");
    return 0;
}