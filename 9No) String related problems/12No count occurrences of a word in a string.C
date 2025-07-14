#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    char ch[20];
    printf("Enter a word: ");
    getchar();
    scanf("%s", ch);


    int c = 0;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')continue;

        int s = i;

        while(str[i] != ' ' && str[i] != '\0')
        i++;

        int e = i, f = 0;

        for(int j = 0; s < e; j++, s++)
        {
            if(ch[j] != str[s])
            {
                f = 1;
                break;
            }
        }

        if(f == 0)c++;
    }

    printf("%d", c);

    return 0;
}