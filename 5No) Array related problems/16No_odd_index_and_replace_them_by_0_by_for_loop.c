#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(i % 2 != 0)
        a[i] = 0;
        printf("%d ", a[i]);
    }

    return 0;
}
