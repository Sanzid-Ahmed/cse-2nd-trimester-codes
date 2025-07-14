#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;

    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int m;
    scanf("%d", &m);

    int b[m], j = 0;

    while(j < m)
    {
        scanf("%d", &b[j]);
        j++;
    }

    int k = 0;

    while(k < n)
    {
        int f = 0, l = 0;

        while(l < m)
        {
            if(a[k] == b[l])
            {
                f = 1;
                break;
            }
            l++;
        }
        if(f == 0)
        printf("%d ", a[k]);
        k++;
    }

    return 0;
}
