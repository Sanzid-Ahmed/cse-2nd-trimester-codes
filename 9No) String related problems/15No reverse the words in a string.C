#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);


    int n = 0;
    while(str[n] != '\0')
    {
        if(str[n] == '\n')
        str[n] = str[n + 1];
        n++;
    }

    for(int i = 0; i < n / 2; i++)
    {
        char t = str[i];
        str[i] = str[n - 2 - i];
        str[n - 1 - i] = t;
    }

    for(int i = 0; i < n; i++)
    {
        if(str[i] == ' ')continue;

        int c = 0;
        while(str[c] != ' ')c++;

        for(int j = 0; j < c / 2; j++)
        {
            char t = str[j];
            str[j] = str[c - 1 - j];
            str[c - 1 - j] = t;
        }
    }

    printf("%s", str);

    return 0;
}