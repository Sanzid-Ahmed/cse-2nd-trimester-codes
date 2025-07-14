#include <stdio.h>

struct customer{
    char name[100];
    int id;
    int shopped;
    float money[50];
};

int main()
{
    struct customer c[100];

    for(int i = 0; i < 100; i++)
    {
        printf("Enter customer number %d name: ", i + 1);
        getchar();
        scanf("%[^\n]", c[i].name);
        printf("Enter %s's ID: ", c[i].name);
        scanf("%d", &c[i].id);
        printf("Enter %s's Numbers of time shoped: ", c[i].name);
        scanf("%d", &c[i].shopped);
        printf("Enter money in each of the shoppings:\n");
        for(int j = 0; j < c[i].shopped; j++)
        {
            scanf("%f", &c[i].money[j]);
        }
    }

    float average[100];

    for(int i = 0; i < 100; i++)
    {
        float sum = 0;
        for(int j = 0; j < c[i].shopped; j++)
        {
            sum += c[i].money[j];
        }

        average[i] = sum / c[i].shopped;
    }

    int winner = 0;

    for(int i; i < 100; i++)
    {
        if(c[i].shopped > 10)
        {
            if(average[winner] < average[i])
            winner = i;
        }
    }

    printf("The winner is: %s\n", c[winner].name);

    return 0;
}