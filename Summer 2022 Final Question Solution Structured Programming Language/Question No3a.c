#include <stdio.h>

int main()
{
    char ch[100];
    scanf("%[^\n]", ch);

    for(int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] == 'a' || ch[i] == 'A' || ch[i] == 'e' || ch[i] == 'E' || ch[i] == 'i' || ch[i] == 'I' || ch[i] == 'o' || ch[i] == 'O' || ch[i] == 'u' || ch[i] == 'U')
        {
            if(ch[i] == ch[i + 1])
            {
                for(int j = i + 1; ch[j] != 0; j++)
                {
                    ch[j] = ch[j + 1];
                }
                i--;
            }
        }
    }

    printf("%s", ch);

    return 0;
}
