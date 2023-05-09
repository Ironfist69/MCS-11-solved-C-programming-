#include<stdio.h>
#include<math.h>

int seriesSum(int n) {
    int i;
    int sum=0;
    for(i=1;i<=n;i++) {
        sum+=pow(i,i);
    }
    printf("Sum of series: %d \n",sum);
    return sum;
}
int main () {
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    seriesSum(n);
    return 0;
}