#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fflush(stdin);
    scanf("%[^\n]", str1);

    printf("Enter the second string: ");
    fflush(stdin);
    scanf("%[^\n]", str2);

    int i = 0;
    while(str1[i] != '\0')
    {
        i++;
    }

    str1[i++] = ' ';
    int j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }

    str1[i] = '\0';

    printf("%s", str1);

    return 0;
}