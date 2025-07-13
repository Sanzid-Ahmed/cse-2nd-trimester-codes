#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }

    int m;
    scanf("%d", &m);

    int b[m];

    for(int i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int f = 0;

        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                f = 1;
                break;
            }
        }
        if(f == 0) printf("%d ", a[i]);
    }

    return 0;
}
