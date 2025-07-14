#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);


    int arr[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(int j = 0; j < n / 2; j++)
    {
        for(int i = 0; i < m; i++)
        {
            int t = arr[i][j];
            arr[i][j] = arr[i][n - 1 - j];
            arr[i][n - 1 - j] = t;
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}
