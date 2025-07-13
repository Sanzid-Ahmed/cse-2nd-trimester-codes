#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
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

    int j = n > m ? n : m;
    int k = n < m ? m : n;

    for(int i = 0; i < j; i++)
    {
        if(i < k)
        {
            int f = 0;

           for(int l = 0; l < k; l++)
           {
                if(a[i] == b[l])
                {
                    f = 1;
                    break;
                    //f = 1; vary much alarming
                }
           }
           if(f == 0) printf("%d ", a[i]); // many times i write = (assign) sign instead of == (equal
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
