#include <stdio.h>

struct program{
    char name[60];
    int total_memory;
    int used_memory;
};

int all_caps(char *input);
int memory(int a, int b);

int main()
{
    int N;
    scanf("%d", &N);

    struct program p[N];

    for(int i = 0; i < N; i++)
    {
        getchar();
        scanf("%[^\n]", p[i].name);
        scanf("%d", &p[i].total_memory);
        scanf("%d", &p[i].used_memory);
    }

    int Num1[N], Num2[N], count = 0;

    for(int i = 0; i < N; i++)
    {
        Num1[i] = all_caps(p[i].name);
    }

    for(int i = 0; i < N; i++)
    {
        if(Num1[i] == 1)
        {
            if(memory(p[i].total_memory, p[i].used_memory))
            {
                count++;
                Num2[i] = 1;
            }
            else
            {
                Num2[i] = 0;
            }

        }
    }

    printf("%d\n", count);
    for(int i = 0; i < N; i++)
    {
        if(Num2[i])
        printf("%s", p[i].name);
    }
}


int all_caps(char *input)
{
    int f = 1;
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] >= 'A' && input[i] <= 'Z')
        {}
        else
        {
            f = 0;
            break;
        }
    }

    return f;
}


int memory(int a, int b)
{
    if(a <= b)
        return 1;
    else
        return 0;
}
