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
        int f = 0, l = 0;

        do
        {
            if(a[k] == b[l])
            {
                f = 1;
                break;
            }
            l++;
        }
        while(l < m);

        if(f == 0) printf("%d ", a[k]);
        k++;
    }
    while(k < n);

    return 0;
}
