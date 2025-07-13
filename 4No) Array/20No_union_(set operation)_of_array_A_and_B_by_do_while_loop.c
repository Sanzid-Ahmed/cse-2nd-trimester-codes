#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n], i = 0;
    do
    {
        scanf("%d", &a[i]);
        i++;
    }
    while(i < n);

    int m;
    scanf("%d", &m);

    int b[m], j = 0;

    do
    {
        scanf("%d", &b[j]);
        j++;
    }
    while(j < m);

    int k = 0;

    do
    {
        printf("%d ", a[k]);
        k++;
    }
    while(k < n);

    int l = 0;

    do
    {
        int o = 0, f = 0;

        do
        {
            if(b[l] == a[o])
            {
                f = 1;
                break;
            }

            o++;
        }
        while(o < n);

        if(f == 0)
        printf("%d ", b[l]);

        l++;
    }
    while(l < m);

    return 0;
}
