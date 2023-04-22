#include<stdio.h>
int main () {
    FILE*fp;
    char ch;
    fp=fopen("My.TXT","r");
    if(fp==NULL) {
        printf("Invalid !");
        return 1;
    }
    printf("File contents \n");
    for(ch=putchar(ch);ch!=EOF;ch=putchar(ch)) {
        putchar(ch);
    }
    fpclose(fp);
    system("pause");
    return 0;
}