#include<stdio.h>
int main () {
    char ch;
    FILE *src,*des;
    src=fopen("src.txt","r");
    des=fopen("des.txt","w");
    if(src==NULL||des==NULL) {
        printf("Error opening file !");
    }
    else {
        while((ch=fgetc(src)!=EOF)) {
            fputc(ch,des);
        }
    }
    fclose(src);
    fclose(des);
    return 0;
}