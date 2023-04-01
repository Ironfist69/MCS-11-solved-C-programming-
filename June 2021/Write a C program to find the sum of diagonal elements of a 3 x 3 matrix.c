#include<stdio.h>

int main () {
    int matrix[3][3];
    int sum =0;
    printf("Enter elements of Matrix: ");
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0;i<3;i++) {
        sum+=matrix[i][i];
    }
    printf("The  sum of diagonal elements of a 3 x 3 matrix is: %d \n",sum);

    system("pause");
    return 0;
}