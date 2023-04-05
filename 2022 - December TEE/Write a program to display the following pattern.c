#include<stdio.h>

int main () {
    int i,j;
    for (i=0;i<4;i++) {
        printf ("%d",i+1);
        printf("  ");
    }
    printf ("\n");
    printf("   ");
    for(i=4;i<7;i++) {
        printf("%d", i+1);
        printf("  ");
    }
    printf ("\n");
    printf("      ");
    for(i=7;i<9;i++) {
        printf("%d", i+1);
        printf("  ");
    }
    printf ("\n");
    system("pause");
    return 0;
}