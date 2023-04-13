#include <stdio.h>
int main () {
    int i;
    for(i=0;i<9;i++) {
        if(i==5) {
            continue;
        } else {
            printf("%d \n",i);
        }
    }
    system("pause");
    return 0;
}