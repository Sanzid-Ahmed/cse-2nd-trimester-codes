#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    scanf("%d", &a[i]);

    int m;
    scanf("%d", &m);

    int b[m], c[m], f = 0;

    for(int i = 0; i < m; i++)
    scanf("%d", &b[i]);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                c[f] = a[i];
                f++;
            }
        }
    }

    if(f == 0)
        printf("Empty set\n");
    else
    for(int i = 0; i < f; i++)
        printf("%d ", c[i]);

        return 0;
}
