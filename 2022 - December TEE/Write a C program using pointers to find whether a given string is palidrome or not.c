#include<stdio.h>
#include<string.h>

int main() {
    char str[100];
    int len,i;
    int flag=1;         //1 for palindrome 0 for not

    printf("Enter the string: ");
    gets(str);
    len = strlen(str);

    for(i=0;i<len/2;i++) {
        if( *(str+i) != *(str+len-i-1)) {
            flag = 0;
            break;
        }
    }
    if (flag==1) {
        printf("The string is palindrome \n");
    } else {
        printf("The string is not palindrome \n");
    }
    system("pause");
    return 0;
}