#include <stdio.h>

int isodd (int n) {
    if (n % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main () {
    int n;
    printf ("Enter your number: \n");
    scanf("%d", &n);
    if(isodd(n)) {
        printf("The number %d is Even \n", n);
    } else {
        printf("The number %d is Odd \n", n);
    }

    system("pause");
    return 0;
}