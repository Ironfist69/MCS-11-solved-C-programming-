#include <stdio.h>

int fibonacci (int n) {
    if (n==0 || n==1) {
        return n;                               //Main part
    } else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}

void printFibonacci (int n) {
    for ( int i=0; i < n; i++) {            //Looping for the n series
        printf ("%d",fibonacci(i));
    }
}

int main () {
    int n;
    printf ("Enter your terms: ");
    scanf ("%d", &n);
    printf ("The fibonacci series for %d terms is: ", n);
    printFibonacci(n);
    printf ("\n");
    system("pause");
    return 0;
}