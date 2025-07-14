#include <stdio.h>

int main()
{
    int a = 5 != 6? -1.2 : 0.3;
    int b = 1 + a--;

    if(!b--)
    printf("Unside First IF\n");

    printf("a = %d and b = %d\n", a, b);

    if(a * b > 0 && b - a > 0)
    printf("Inside Second IF\n");

    else if(a + b < 0)
    printf("Inside ELSE IF\n");

    else
    printf("Inside ELSE\n");

    return 0;
}
