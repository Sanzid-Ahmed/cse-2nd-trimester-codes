#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);


    int c = 1;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        c++;
    }

    printf("The number of word: %d", c);

    return 0;
}