#include <stdio.h>
#include <math.h>
(int main(){
    float a,b;
    float S,m,n,o;
    printf("enter a: ");
    scanf("%f", &a);
    printf("enter b: ");
    scanf("%f", &b);
    S = a+b;
    m = a-b;
    n = a*b;
    o = a/b;
    printf("Sum of %.2f and %.2f is %.2f\n", a, b, S);
    printf("Minus of %.2f and %.2f is %.2f\n", a, b, m);
    printf("Multiplication of %.2f and %.2f is %.2f\n", a, b, n);
    printf("Division of %.2f and %.2f is %.2f\n", a, b, o);
    return 0;
})