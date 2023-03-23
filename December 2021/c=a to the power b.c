#include <stdio.h>

int main () {
    int a, b, c, result=1;
    printf ("Enter value of a: ");
    scanf ("%d", &a);
    printf ("Enter value of b: ");
    scanf ("%d", &b);

    for(int i=1; i<=b; i++) {
        result *=a;
    }
    printf("The value of %d to the power %d is %d \n", a,b,result);
    system("pause");
    return 0;
}