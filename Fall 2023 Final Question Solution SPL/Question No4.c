#include <stdio.h>

int main()
{
    int num = 20;
    int *ptr = &num;

    printf("Before: %d", num);

    *ptr*2;

    printf("After: %d", num);

    return 0;
}