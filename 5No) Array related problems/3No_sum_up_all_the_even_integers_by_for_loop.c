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

    int sum = 0;

    for(int j = 0; j < n; j++)
    {
        if(a[j] % 2 == 0)
        sum += a[j];
    }

    printf("The sum of even integer from the given number: %d", sum);

    return 0;
}
