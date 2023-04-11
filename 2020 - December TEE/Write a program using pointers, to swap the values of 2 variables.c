#include <stdio.h>
void swap(int *x, int *y){
    int temp =*x;
    *x = *y;
    *y = temp;
}
int main () {
    int a,b;
    printf("Enter your first integer: ");
    scanf("%d", &a);
    printf("Enter your second integer: ");
    scanf("%d", &b);
    printf("Before swap: %d and %d \n", a,b);
    swap(&a,&b);
    printf("After swap: %d and %d \n", a,b);
    system("pause");
    return 0;
}