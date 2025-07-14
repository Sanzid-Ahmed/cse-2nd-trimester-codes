#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);;

    int a[n], i = 0;
    while(i < n)
    {
        scanf("%d", &a[i]);
        i++;
    }

    int m;
    scanf("%d", &m);

    int b[m], c[m], j = 0, f = 0;
    while(j < m)
    {
        scanf("%d", &b[j]);
        j++;
    }

    int k = 0;
    while(k < n)
    {
        int l = 0;

        while(l < m)
        {
            if(a[k] == b[l])
            {
                c[f] = a[k];
                f++;
            }
            l++;
        }
        k++;
    }

    int l = 0;

    if(f == 0)
        printf("Empty set\n");
    else
    while(l < f)
    {
        printf("%d ", c[l]);
        l++;
    }

    return 0;
}
