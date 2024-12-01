#include <stdio.h>

int main(){
    int n,i,s,f;
    printf("Enter n: ");
    scanf("%d",&n);
    s = 0;
    f=1;
    for( i = 1; i<=n; ++i){
        f *= i;
        s += f;
    }
    printf("sum = %d\n",s);

}