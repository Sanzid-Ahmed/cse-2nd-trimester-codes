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
        printf("%d ", a[k]);
        k++;
    }

    int l = 0;

    while(l < m)
    {
        int o = 0, f = 0;

        while(o < n)
        {
            if(b[l] == a[o])
            {
                f = 1;
                break;
            }
            o++;
        }
        if(f == 0)
        printf("%d ", b[l]);

        l++;
    }


}
