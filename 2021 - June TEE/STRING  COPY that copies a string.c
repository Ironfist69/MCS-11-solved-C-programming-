#include <stdio.h>
void copystring(char *str1,char *str2) {
    int i=0;
    while(str1[i] !='\0') {
        str1[i]=str2[i];
        i++;
    }
    str2[i] ='\0';
}
int main () {
    char str1[100], str2[100];
    printf("Enter your string: ");
    gets(str1);
    copystring(str1,str2);
    printf("Copied string is %s: \n", str2);
    system("pause");
    return 0;
}