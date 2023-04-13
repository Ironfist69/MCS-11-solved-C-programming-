#include <stdio.h>
#include <math.h>

void print_series_sum(int n);

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    
    print_series_sum(n);
    system("pause");
    return 0;
}

void print_series_sum(int n) {
    int i;
    double sum = 0.0;
    
    for (i = 1; i <= n; i++) {
        sum += pow(i, i);
    }
    
    printf("The sum of the series 1^1 + 2^2 + ... + %d^%d is %f\n", n, n, sum);
}