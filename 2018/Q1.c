#include <stdio.h>
#include <string.h>

int main () {
    char string [] = "COBOL";
    int length = strlen (string);
        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%c", string[j]);
            }
            printf("\n");
        }
        for (int i = length-1; i >= 1; i--)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", string[j]);
            }
            printf("\n");
        }

        system ("pause");
        return 0;
}