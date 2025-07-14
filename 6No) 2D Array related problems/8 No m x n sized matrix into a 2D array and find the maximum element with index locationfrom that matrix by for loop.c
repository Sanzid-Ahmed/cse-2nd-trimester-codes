#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    int a[n][m];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    int r = 0, c = 0;

    for(int i = 0; i < n; i++)
    {
       for(int j = 0; j < m; j++)
       {
            if(max < a[i][j])
            {
                max = a[i][j];
                r = i;
                c = j;
            }
       }
    }

    printf("Max: %d \nLocation:[%d][%d]", max, r, c);

    return 0;
}
