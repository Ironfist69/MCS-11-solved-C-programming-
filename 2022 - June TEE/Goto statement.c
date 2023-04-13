#include<stdio.h>
void checkevenornot(int num) {
    if(num%2==0) {
        goto even;
    } else {
        goto odd;
    }
even: printf("Number %d is even \n", num);
        return;
odd: printf("Number %d is odd \n", num);
}
int main () {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    checkevenornot(num);
    system("pause");
    return 0;
}