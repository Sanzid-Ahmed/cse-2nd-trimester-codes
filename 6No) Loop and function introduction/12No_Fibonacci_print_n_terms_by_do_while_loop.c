#include <stdio.h>

int main()
{
    int i = 1, a = 0, b = 1, r = 0, n;
    scanf("%d", &n);

    do
    {
        r = a + b;
        printf("%d", b);
        a = b;
        b = r;
        if (i < n)
        printf(", ");
        i++;
    }
    while(i <= n);

    return 0;
}
