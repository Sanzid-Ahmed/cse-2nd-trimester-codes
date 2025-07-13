#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int n = 0;
    while(str[n] != '\0')
    n++;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(str[j] > str[j + 1])
            {
                char t = str[j];
                str[j] = str[j + 1];
                str[j + 1] = t;
            }
        }
    }

    printf("%s", str);

    return 0;
}