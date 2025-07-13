#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int c = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'a' || str[i] == 'e' || str[i] == 'E' || str[i] == 'I' || str[i] == 'i' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
        c++;
    }

    printf("Number of vowel : %d\n", c);

    return 0;
}