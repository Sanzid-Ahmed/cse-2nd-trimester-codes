#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d",&n);

    for (i=5; i<n; i*=2)
    {
        printf("%d ",i);
    }
    return 0;
}
