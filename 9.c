#include <stdio.h>
#include <math.h>

int main() {
    int i,n,s;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    s = 0;
    for (i = 1; i <= n; i++) {
        s += i;
    }
    printf("Sum 1+2+3+...+%d = %d ",n, s);
}

