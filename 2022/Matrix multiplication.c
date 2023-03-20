//Write a C program to find the product of two matrices
#include <stdio.h>
int main () {

    int a_row, a_col, b_row, b_col;
    printf("Enter the rows and columns for matrix A: ");        //A row,column
    scanf("%d %d", &a_row, &a_col);

    printf("Enter the rows and columns for matrix B: ");        //B row,column
    scanf("%d %d", &b_row, &b_col);

    if (a_col != b_row)
    {
        printf("Matrices can't be multiplited !!");
        system("pause");
        return 0;
    }

            int a[a_row][a_col];
            int b[b_row][b_col];
                    //ELEMENTS OF A
    printf("Enter the elements of matrix A \n");
        for (int i=0; i< a_row; i++) {
            for (int j=0; j<a_col; j++) {
                scanf ("%d", &a[i][j]);
            }
        }
                    //ELEMENTS OF B
    printf("Enter the elements of matrix B \n");
        for (int i = 0; i < b_row; i++) {
            for (int j = 0; j < b_col; j++) {
                scanf("%d", &b[i][j]);
            }
        }
int sum=0;
int PRODUCT[a_row][b_col];
for (int i=0; i<a_row; i++) {                   //MAIN PRODUCT !!
    for (int j=0; j<b_col; j++) {
        for (int k=0; k<b_row; k++) {
            sum+=a[i][k]*b[k][j];
        }
    PRODUCT[i][j]=sum;
    sum=0;
    }
}
    printf ("Product of matrix: \n");
    for(int i=0; i<a_row; i++, printf("\n")) {
        for(int j=0; j<b_col; j++) {
            printf("%d", PRODUCT[i][j]);            //Printing this $hit
        }
    }
    system("pause");
    return 0;
}
