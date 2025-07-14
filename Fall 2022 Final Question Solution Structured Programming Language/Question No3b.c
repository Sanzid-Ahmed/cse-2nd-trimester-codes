#include <stdio.h>

int main()
{
    char ch[100];
    printf("Enter main string: ");
    getchar();
    scanf("%[^\n]", ch);


    printf("Enter substring: ");
    char c[20];
    getchar();
    scanf("%s", &c);

    int m = 0;
    for(int i = 0; ch[i] != '\0'; i++)
    {
        if(ch[i] == ' ')continue;

        int s = i;
        while(ch[i]!= ' ' && ch[i]!= '\0')i++;

        int e = i;

        int f = 1;
        for(int j = 0, k = s; k < e; j++, k++)
        {
            if(ch[k] != c[j])
            {
                f = 0;
                break;
            }
        }

        if(f == 1)
        {
            printf("Substring match");
            m = 1;
            break;
        }

    }

    if(m == 0)
    printf("Substring does not match");


    return 0;
}
