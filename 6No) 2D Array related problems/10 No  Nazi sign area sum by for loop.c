#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int s = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == 0 && j <= n / 2)
                s += a[i][j];
            else if((i > 0 && i < n / 2) && j == n / 2)
                s += a[i][j];
            else if((i < n / 2 && j == n - 1))
                s += a[i][j];
            else if(i == n / 2)
                s += a[i][j];
            else if((i > n / 2 && i < n - 1) && j == n / 2)
                s += a[i][j];
            else if(i == n - 1 && j >= n / 2)
                s += a[i][j];
            else if(i > n / 2 && j == 0)
                s += a[i][j];

        }
    }

    printf("%d", s);

    return 0;
}
