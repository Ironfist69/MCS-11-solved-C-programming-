#include <stdio.h>
#include <string.h>
int main () {
    int i,length;
    char str[100];
    printf("Enter your string: ");
    scanf("%s", str);
    for(i=0;str[i] !='\0';i++) {
        length ++;
    }
    printf("String length: %d \n", length);
    system("pause");
    return 0;
}