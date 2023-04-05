#include <stdio.h>

int main () {
    int a,b,temp;
    printf("Enter value of A: ");
    scanf("%d", &a);
    printf("Enter value of B: ");
    scanf("%d", &b);

    printf("Before value of A: %d and B: %d \n", a,b);

    temp=a;
    a=b;
    b=temp;

    printf("After value of A: %d and B: %d \n", a,b);
    system("pause");
    return 0;
}