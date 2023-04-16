#include<stdio.h>
int fibonacci(int n) {
    if(n==0||n==1) {
        return n;
    } else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main () {
    int n;
    printf("Enter number of series: ");
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        printf("%d \n",fibonacci(i));
    }
    system("pause");
    return 0;
}