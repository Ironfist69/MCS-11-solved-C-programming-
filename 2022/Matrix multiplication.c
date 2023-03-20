//Write a C program to perform the following 
//operation on matrices :
//D = (A*B) + C
//where A, B and C are matrices of 3  3 size 
//and D is the resultant matrix.

#include <stdio.h>
int main () {

int A[3][3], B[3][3], C[3][3], D[3][3];
printf("Enter elements of matrix A: \n");
for(int i=0; i<3; i++) {
    for(int j=0; j<3; j++) {        
        scanf("%d", &A[i][j]);       //Taking elements of A
    }
}

printf("Enter elements of matrix B: \n");
for (int i=0; i<3; i++) {
    for (int j=0; j<3; j++) {
        scanf("%d", &B[i][j]);       //Taking elements of B
    }
}

printf("Enter elements of matrix C: \n");
for(int i=0; i<3 ; i++) {
    for(int j=0; j<3; j++) {
        scanf("%d", &C[i][j]);      //Taking elements of C
    }
}


for(int i=0; i<3 ; i++) {
    for(int j=0; j<3; j++) {
        D[i][j]=0;                                  //MAIN OPERATION
        for(int k=0; k<3; k++) {
            D[i][j] += A[i][k]*B[k][j];            // A x B storing it to D
            D[i][j] += C[i][j];                    // Adding C and storing it to D
        }
    }
}

            printf ("The D matrix will be \n");
            for(int i=0; i<3; i++) {
                for (int j=0; j<3; j++) {
                    printf ("%d", D[i][j]);
                }
                printf("\n");
            }

            system("pause");
            return 0;
}
