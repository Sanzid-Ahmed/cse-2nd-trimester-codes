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

    int sum = 0, j = 0;
    do
    {
        if(a[j] % 2 == 0)
        sum += a[j];

        j++;
    }
    while(j < n);

    printf("The sum of even integer from the given number: %d", sum);

    return 0;
}
