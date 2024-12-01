#include <stdio.h>

int main() {
    int a,s;
    printf("Enter an integer: ");
    scanf("%d", &a);
    s = abs(a);
    printf("The absolute value of %d is %d.\n", a, s);
    return 0;
}