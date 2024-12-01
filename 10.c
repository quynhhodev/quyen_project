#include <stdio.h>
#include <math.h>
int main() {
    int i, n, s;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    s = 1;
    for (i = 1; i <= n; i++) {
        s *= i;
    }
    printf("Product 1*2*3*...*%d = %d ", n, s);
    return 0;
}