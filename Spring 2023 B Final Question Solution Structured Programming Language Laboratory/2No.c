#include <stdio.h>

struct card{
    char name[60];
    int stage;
    int HP;
};

int stage_check(int n);
int ends_with(char *input, char letter);

int main()
{
    int N;
    scanf("%d", &N);


    struct card c[N];

    for(int i = 0; i < N; i++)
    {
        getchar();
        scanf("%[^\n]", c[i].name);
        scanf("%d", &c[i].stage);
        scanf("%d", &c[i].HP);
    }

    int price[N];
    int sum = 0;

    for(int i = 0; i < N; i++)
    {
        price[i] =  50 + c[i].HP + stage_check(c[i].stage) + (ends_with(c[i].name, 'X') == 1?200:0);
        sum += price[i];
    }

    printf("%d", sum);
}

int stage_check(int n)
{
    switch(n)
    {
        case 0:
        return 0;
        case 1:
        return 30;
        case 2:
        return 80;
        default:
        printf("You Enter wrong Stage\n");
        return 0;
    }
}


int ends_with(char *input, char letter)
{
    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i + 1] == '\0')
        {
            switch(input[i] == letter)
            {
                case 1:
                return 1;
                default:
                return 0;
            }
        }
    }
}
