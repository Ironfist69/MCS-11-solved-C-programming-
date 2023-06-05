#include<stdio.h>
int main () {
    FILE*fp;
    fp=fopen("cock.txt","r");
    if(fp==NULL) {
        printf("Invalid");
        return 0;
    }
    fseek(fp,0,SEEK_END);
    printf("%ld",ftell(fp));
    fclose(fp);
    return 0;
}