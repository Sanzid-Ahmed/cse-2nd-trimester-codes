#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
        for(int j = i + 1; str[j] != '\0'; j++)
        {
            if(str[i] == str[j])
            {
                for(int k = j; str[k] != '\0'; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }
    }

    str[i] == '\0';

    printf("%s", str);

    return 0;
}