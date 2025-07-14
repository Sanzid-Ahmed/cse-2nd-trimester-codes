#include <stdio.h>

int main()
{
    int n, mid;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }


    if(n % 2 == 0)
    {
        for(int i = 0; i < n / 2; i++)
        {
            int t = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = t;
        }
    }
    else
    {
        for(int i = 0; i < n / 2 + 1; i++)
        {
            int t = a[i];
            a[i] = a[n - i - 1];
            a[n - i - 1] = t;
        }
    }

    int f = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] != a[i])
        {
           f = 1;
            break;
        }
    }

    if(f == 0)
        printf("Yes\n");
    else
        printf("No\n");

        int sum = 0;

        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
                sum += a[i];
        }

        printf("%d\n", sum);

        if(sum % 2 != 0)
            printf("Yes\n");
        else
            printf("No\n");

        return 0;
}
