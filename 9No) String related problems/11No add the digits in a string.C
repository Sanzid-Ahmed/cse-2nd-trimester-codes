#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int c = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        c++;
    }

    printf("%d", c);

    return 0;
}