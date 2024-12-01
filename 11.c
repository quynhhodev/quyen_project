#include <stdio.h>
#include <math.h>

int main(){
    int n,i,s;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    s = 1;
    for (i = 1; i <= 2*n+1; i = i+2)
    s =s*i;
    printf("Product of the series: %d\n", s);

}
