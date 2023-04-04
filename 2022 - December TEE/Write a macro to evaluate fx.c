//defineWrite a macro to evaluate : 4
//𝑓(𝑥) = 5𝑥3 + 2𝑥 + 3

#include <stdio.h>
#define ff(x)  (5*(x)*(x)*(x) + 2*(x) + 3)

int main () {
    int x;
    printf("Give x's value: ");
    scanf("%d", &x);
    int result = ff(x);
    printf("The value of f(%d) is:%d \n", x, result);
    system("pause");
    return 0;
}