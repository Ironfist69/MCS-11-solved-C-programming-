#include <stdio.h>

// Function to generate the nth Fibonacci number
int fibonacci(int n) {
    if (n==0||n==1)
    {
        return n;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
// Function to print the Fibonacci series up to n terms

    void printFibonacci(int n) {
        int i;
        for (i = 0; i < n; i++)
        {
            printf("%d", fibonacci(i));
        }
    }

    int main () {
        int n;
        printf("Enter terms: ");
        scanf("%d", &n);
        printf("The fibonacci series of %dth term is", n);
        printFibonacci(n);
    system ("pause");
    return 0;
    }