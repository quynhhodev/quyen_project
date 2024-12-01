#include <stdio.h>

int main(){
    int s,i,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    s =0;
    for (i = 0; i <= 2*n; i = i+2) {
        s += i;
    }
    printf ( "The sum of 2+4+6+... 2n is %d\n", s);
}

