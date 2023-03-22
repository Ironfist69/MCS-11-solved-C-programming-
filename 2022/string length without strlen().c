#include <stdio.h>
int main () {
    char string [100];
    int length=0;
    printf ("Enter your string: ");
    scanf ("%s", &string);

    while (string[length] != '\0')
    {
        length++;                //while loop to iterate through the str array and count the number of 
                                  //characters until we encounter the null character \0, which indicates the end of the string
    }

    printf("The length of the string is %d \n", length);
    system("pause");
    return 0;
}