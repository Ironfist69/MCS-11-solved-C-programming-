#include <stdio.h>

int factorial (int n) {
    if (n==0 || n==1) {
        return 1;
    } else {
        return n*factorial(n-1);
    }
}
int main () {
    int n;
    printf("Enter factorial number: ");
    scanf("%d", &n);
    if(n<1||n>10) {
        printf ("Invalid !");
    } else {
        printf("%d!=%d \n", n,factorial(n));
    }
    system("pause");
    return 0;
}