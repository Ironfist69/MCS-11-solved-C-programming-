#include<stdio.h>
#include<math.h>
int main () {
    double a,b,c,d,e,m,n,result;
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);
    printf("d = ");
    scanf("%lf", &d);
    printf("e = ");
    scanf("%lf", &e);
    printf("m = ");
    scanf("%lf", &m);
    printf("n = ");
    scanf("%lf", &n);
result=pow(a,2)*pow(b,3)*pow(c,4) - pow(d,4)/(e*(m-n));
printf("%lf \n", result);
system("pause");
return 0;
}