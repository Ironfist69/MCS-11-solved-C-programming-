#include<stdio.h>
#include<math.h>

int main () {
    int x,y,p,q,r;
    double result;
    printf("x= ");
    scanf("%d",&x);
    printf("y= ");
    scanf("%d",&y);
    printf("p= ");
    scanf("%d",&p);
    printf("q= ");
    scanf("%d",&q);
    printf("r= ");
    scanf("%d",&r);
    result=(x*y)-(pow(p+q,4)/pow(r,4));
    printf("%lf \n",result);
    system("pause");
    return 0;
}