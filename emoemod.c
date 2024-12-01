#include <string.h>
#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;

    int sum = a + b;
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Hello!");
        count = count +1;
        printf("\n");
    }
    
    
    printf("So lan ma hello duoc in ra: %d", count);
    printf("\n");
    return 0;
}
