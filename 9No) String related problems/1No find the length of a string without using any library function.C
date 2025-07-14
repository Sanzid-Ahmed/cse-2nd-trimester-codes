#include <stdio.h>

int main()
{
    char str[100];
    scanf("%[^\n]", str);
    // fgets(str, 100, stdin);

    int i;
    for(i = 0; str[i] != '\0'; i++);

    printf("size: %d", i);

    return 0;
}