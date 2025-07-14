#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n % 2 == 0){
        printf("Enter an odd number");
        return 0;
    }

    for(int i = 0; i < n; i++)
    {
        for(int s = i; s < n - 1; s++)
        {
            printf(" ");
        }

        for(int j = 0, a = i; j < i; j++, a--)
        {
            printf("%d", a);
        }
        printf("0");
        for(int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
