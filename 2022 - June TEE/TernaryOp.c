#include<stdio.h>
int main () {
    int condition;
    printf("Enter your marks: ");
    scanf("%d",&condition);
    (condition>=40)? printf("Passed"):printf("failed");
    getch();
    return 0;
}