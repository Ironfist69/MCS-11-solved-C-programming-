#include <stdio.h>
int main () {
    int n;
    printf("Enter the factorial number: ");
    scanf("%d", &n);
    int factorial=1;
    for(int i=1;i<=n;i++) {
        factorial= factorial*i;
    }
    printf("Factorial of %d! is: %d \n", n,factorial);
    system("pause");
    return 0;
}