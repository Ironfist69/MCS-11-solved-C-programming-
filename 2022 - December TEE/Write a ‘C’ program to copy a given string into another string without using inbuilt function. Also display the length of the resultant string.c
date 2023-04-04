//Write a ‘C’ program to copy a given string
//into another string without using inbuilt
//function. Also display the length of the
//resultant string

#include<stdio.h>
#include<string.h>

int main () {
    int i,len;
    char str1[100], str2[100];
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
    for(i=0; *(str1+i) != '\0';i++) {
        *(str2+i) = *(str1+i);
    }
    *(str2+i) ='\0';

    len =0;
    for(i=0; *(str2+i) != '\0';i++) {
        len ++;
    }

    printf("The copied string is: %s\n", str2);
    printf("The length of the string is: %d\n", len);
    system("pause");
    return 0;
}