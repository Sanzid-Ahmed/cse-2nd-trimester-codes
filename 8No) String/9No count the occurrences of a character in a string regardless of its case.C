#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("Enter a character: ");
    getchar();
    char ch = getchar();

    int c = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            if(ch == str[i])c++;
            else if(ch - 32 == str[i])c++;
        }
        else
        {
            if(ch == str[i])c++;
            else if(ch + 32 == str[i])c++;
        }
    }

    printf("%d", c);

    return 0;
}