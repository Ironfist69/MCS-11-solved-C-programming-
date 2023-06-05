#include<stdio.h>
int factorialofcj(int n) {
    if(n==0||n==1){
        return 1;
    } else {
        return factorialofcj(n-1)*n;
    }
}
int main () {
    int n;
    printf("Choose any 2 number 9....number 9 should be large: ");
    scanf("%d",&n);
    printf("Big smoke wants to fuck this factorial %d! = %d",n,factorialofcj(n));
    system("pause");
    return 0;
}