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
    printf("Enter the factorial number: ");
    scanf("%d", &n);
    printf("Factorial of %d! is: %d \n", n, factorial(n));
    system("pause");
    return 0;
}