<<<<<<< HEAD
#include<stdio.h>
int isodd(int n) {
    if (n%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int start,end,n,i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("The Even number range for %d to %d is: \n",start,end);
        for(i=start;i<=end;i++) {
            if(isodd(i)) {
                printf("%d\n",i);    
        }
    }
    printf("The odd number range for %d to %d is: \n",start,end);
        for(i=start;i<=end;i++) {
            if(!isodd(i)) {
                printf("%d\n",i);    
            }
        }
    system("pause");
    return 0;
=======
#include<stdio.h>
int isodd(int n) {
    if (n%2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int start,end,n,i;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("The Even number range for %d to %d is: \n",start,end);
        for(i=start;i<=end;i++) {
            if(isodd(i)) {
                printf("%d\n",i);    
        }
    }
    printf("The odd number range for %d to %d is: \n",start,end);
        for(i=start;i<=end;i++) {
            if(!isodd(i)) {
                printf("%d\n",i);    
            }
        }
    system("pause");
    return 0;
>>>>>>> c2fa50b6325fa6909214bbc5bfaef52dc13d035e
}