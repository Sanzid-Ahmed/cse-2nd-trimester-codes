#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]", str);


    int a = 0, e = 0, i = 0, o = 0, u = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' || str[i] == 'A')
        a++;
        else if(str[i] == 'e' || str[i] == 'E')
        e++;
        else if(str[i] == 'i' || str[i] == 'I')
        i++;
        else if(str[i] == 'o' || str[i] == 'O')
        o++;
        else if(str[i] == 'u' || str[i] == 'U')
        u++; 
    }

    printf("A/a:%d\nE/e:%d\nI/i:%d\nO/o:%d\nU/u:%d\n", a, e, i, o, u);

    return 0;
}