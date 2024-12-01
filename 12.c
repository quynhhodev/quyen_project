#include <stdio.h>
#include <math.h>

int main(){
    int s,i,n;
    printf("enter the value of n : ");
    scanf("%d",&n);
    s = 0;
    for ( i = 1 ; i <= 2*n+1 ; i = i+2  ) {
        s = s + i;
        }
        printf("sum of first %d odd numbers is : %d",n,s);
}
