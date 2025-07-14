#include <stdio.h>

int main()
{
    int n, a = 97;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        if(i % 2 == 0)
        {
            printf("1 ");
        }
        else
        {
            printf("%c ", a);
            a++;
        }
    }
    return 0;
}
