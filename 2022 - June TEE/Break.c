#include<stdio.h>
int main () {
    int i;
    for(i=0;i<5;i++) {
        if (i==5) {
            break;
        } else {
            printf("%d \n",i);
        }
    }
    system("pause");
    return 0;
}