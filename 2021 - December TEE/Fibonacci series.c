#include <stdio.h>

int fibonacci (int n) {
    if (n==0 || n==1) {
        return n;                               //Main part
    } else {
        return fibonacci (n-1) + fibonacci (n-2);
    }
}
int main () {
    int n,i;
    printf ("Enter your terms: ");
    scanf ("%d", &n);
    printf ("The fibonacci series for %d terms is: ", n);
    for(i=0;i<n;i++) {
        printf("%d",fibonacci(i));
    }
    getch();
    return 0;
}