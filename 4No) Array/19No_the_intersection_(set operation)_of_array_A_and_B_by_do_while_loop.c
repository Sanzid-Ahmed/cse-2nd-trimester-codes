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

    int b[m], c[m], j = 0, f = 0;
    do
    {
        scanf("%d", &b[j]);
        j++;
    }
    while(j < m);

    int k = 0;

    do
    {
        int l = 0;

        do
        {
            if(a[k] == b[l])
            {
                c[f] = a[k];
                f++;
            }
            l++;
        }
        while(l < m);

        k++;
    }
    while(k < n);

    int l = 0;

    if(f == 0)
    printf("Empty set");
    else
    do
    {
        printf("%d ", c[l]);
        l++;
    }
    while(l < f);

    return 0;
}
