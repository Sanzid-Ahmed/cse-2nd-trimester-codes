#include <stdio.h>

int main()
{
    int a = 8, b = 0, c = 0;

    do
    {
        if(a % 2 == 0) b++;
        else c++;

        printf("%d %d %d\n", a, b, c);

        if(a == 8) a = 3;
        else if(a == 3) a = 6;
        else if(a == 6) a = 9;
        else if(a == 9) a = 0;
    }while(a != 0);

    return 0;
}
