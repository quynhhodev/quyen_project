#include <stdio.h>
#include <math.h>

int main(){
float a, b, x,c,y, d;
printf("Nhap A:");
scanf("%f",&a);
printf("hap B:");
scanf("%f",&b);
printf("Nhap C:");
scanf("%f", &c);
if (a == 0)
    if (b == 0) {
    printf("PTVN");
    if (c == 0)
    printf("PTVN");
    }   
    else
    x = -c/a;
if (b==0) {
    x = sqrt(-c/a) ;
    y = -sqrt(-c/a) ;
  printf("PT co 2 nghiem x1=%f, x2=%f", x, y);
}
if (c==0)
{
    x=0;
y=-b/a ;
printf("PT co 2 nghiem x1=%f,x2=%f",x,y);
}
d = pow(b, 2)-4*a*c;
    if (d < 0)
    printf("PTVN");
    else
if (d == 0){
    x = y = -b / a;
    printf("PT co nghiem = %f", x);
}
    else
    x=(-b+sqrt(d)) /2*a;
    y=(-b-sqrt(d))/2*a;
printf("PT co 2 nghien phan biet: %f, %f", x, y);
}