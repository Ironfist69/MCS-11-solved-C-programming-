#include <stdio.h>
#include <string.h>

int main (){
    char string [] = "INFINITY";
    int length = strlen (string);
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c",string[j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}