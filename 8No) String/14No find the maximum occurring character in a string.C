#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], st[100];
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    strcpy(st, str);

    int c = 0;
    char ch;
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(st[i] == '\1')continue;

        int f = 0;
        for(int j = 0; st[j] != '\0'; j++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                if(str[i] == st[j])
                {
                    f++;
                    st[j] = '\1';
                }
                else if(str[i] + 32 == st[j])
                {
                    f++;
                    st[j] = '\1';
                }
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                if(str[i] == st[j])
                {
                    f++;
                    st[j] = '\1';
                }
                else if(str[i] - 32 == st[j])
                {
                    f++;
                    st[j] = '\1';
                }
            }
        }

        if(f >= c)
        {
            c = f;
            ch = str[i];
        }
    }

    printf("%c => %d", ch, c);

    return 0;
}