#include <stdio.h>
#include <string.h>

struct Cricketer{
    char name[50];
    char country[50];
    char type[10];
    int wickets[30];
    int runs[30];
    int played;
    float overall;
};


int main()
{
    struct Cricketer c[100];

    printf("Enter 100 plyers information.\n");

    for(int i = 0; i < 100; i++)
    {
        printf("Enter the name of player number %d", i+1);
        getchar();
        scanf("%[^\n]", c[i].name);
        printf("Enter %s's country name: ", c[i].name);
        getchar();
        scanf("%[^\n]", c[i].country);
        printf("Enter cricketer type: ");
        getchar();
        scanf("%[^\n]", c[i].type);
        // printf("Enter wickets in last 30 matches\n");
        // for(int j = 0; j < 30; j++)
        // scanf("%d", &c[i].wickets);
        // printf("Enter runs in last 30 matches\n");
        // for(int j = 0; j < 30; j++)
        // scanf("%d", &c[i].runs);
        printf("Enter the number of total match played: ");
        scanf("%d", &c[i].played);
        printf("Enter wickets in last 30 matches\n");
        for(int j = 0; j < 30; j++)
        scanf("%d", &c[i].wickets[j]);
        printf("Enter runs in last 30 matches\n");
        for(int j = 0; j < 30; j++)
        scanf("%d", &c[i].runs[j]);
    }

    int max = 0;
    for(int i = 0; i < 100; i++)
    {
        c[i].overall = 0;
        if(strcmp(c[i].type, "bowler") == 0)
        {
            for(int j = 0; j < 30; j++)
            c[i].overall += c[i].wickets[j];
            c[i].overall /= c[i].played;
        }
        else
        {
            for(int j = 0; j < 30; j++)
            c[i].overall += c[i].runs[j];
            c[i].overall /= c[i].played;
        }

        if(c[max].overall < c[i].overall)
        max = i;
    }

    printf("Cricketer of the Year %s", c[max].name);
    printf("Country: %s", c[max].country);
    printf("type: %s", c[max].type);
    printf("wickets: ");
    for(int i = 0; i < 30; i++)
    printf("%d ", c[max].wickets[i]);
    printf("Runs: ");
    for(int i = 0; i < 30; i++)
    printf("%d ", c[max].runs[i]);
    printf("Played %d matches", c[max].played);
    printf("Overall performence: %d", c[max].overall);

    return 0;
}