#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);


    int i = 0;
    while(str[i] != '\0')
    i++;

    i--; 
    
    int j = 0;
    while(j < i)
    {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;
        i--;
        j++; 
    }

    printf("%s", str);

    return 0;
}