#include <stdio.h>

int main () {
    char ch;
    printf ("Enter the lower case letter: ");
    scanf ("%c", &ch);
    char CH = ch-32;                        //bcz the gap b/w ASCII value of a(97) A(65) is 32
    printf ("The upper case of letter %c is: %c \n\n", ch, CH);
    system("pause");
    return 0;
}