#include <stdio.h>

int main()
{
    int i, n, flag = 0, a, b, r;
    scanf("%d", &n);

    for(i = 1; i <=n; i++)
    {
        a = 0;
        b = 1;
        r = a + b;
        if (r == n)
        {
        printf("Yes\n");
        flag = 1;
        break;
        }
        a = b;
        b = r;
    }
    if (flag == 0)
    {
        printf("No\n");
    }

    return 0;
}
