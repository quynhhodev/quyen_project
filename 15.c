#include <stdio.h>
#include <math.h>
int main(){
    int n,i,s;
    printf("Enter n: ");
    scanf("%d", &n);
    s = 0;
    for(int i = 1; i <= n; i++ ) {
        s += i * i ;
    }
    printf("sum = %d",s);
}