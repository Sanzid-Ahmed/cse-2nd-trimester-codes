#include <stdio.h>

int main()
{
    char str[100], st[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);

    int n = 0;
    while(str[n] != '\0')
    {
        st[n] = str[n];
        n++;
    }

    for(int i = 0; i < n / 2; i++)
    {
        char t = st[i];
        st[i] = st[n - 1 - i];
        st[n - 1 - i] = t;
    }

    st[n] = '\0';

    printf("%s\n%s\n", str, st);

    int f = 1;
    for(int i = 0; i < n; i++)
    {
        if(str[i] != st[i])
        {
            f = 0;
            break;
        }
    }

    if(f)printf("Yes");
    else printf("No");

    return 0;
}