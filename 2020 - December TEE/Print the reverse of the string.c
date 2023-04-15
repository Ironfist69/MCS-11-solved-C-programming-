#include<stdio.h>
#include<string.h>
int main () {
    char my_str[]="Lorem Ipsum";
    int len=strlen(my_str);
    printf("The original string is: %s",my_str);
    printf("\n The reverse of the string: ");
    for(int i=len-1;i>=0;i--) {
        printf("%c", my_str[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}