#include<stdio.h>
int main () {
    int matrix[6][6];
    int i,j;
    int sum=0;
    int count=0;
    printf("Enter 6x6 matrix elements: ");
    for(i=0;i<6;i++) {
        for(j=0;j<6;j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0;i<6;i++) {
        sum+=matrix[6][6];
        count++;
    }
    float avg=sum/count;
    printf("The average of diagonal elements of a matrix of 6x6 is: %d \n", avg);

    system("pause");
    return 0;
}