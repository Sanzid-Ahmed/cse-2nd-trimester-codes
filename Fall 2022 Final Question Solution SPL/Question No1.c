#include <stdio.h>

struct student{
    char Name[100];
    int ID;
    float Marks[5];
};


int main()
{
    struct student s[50];

    for(int i = 0; i < 50; i++)
    {
        printf("Name: ");
        getchar();
        scanf("%[^\n]", s[i].Name);
        printf("ID: ");
        scanf("%d", &s[i].ID);
        printf("Marks: ");
        for(int j = 0; j < 5; j++)
        scanf("%f", s[i].Marks[j]);
    }

    float tMarks[50] = {0};

    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            tMarks[i] += s[i].Marks[j];
        }
    }

    for(int i = 0; i < 5; i++)
    {
        int h = 0;
        for(int j = 0; j < 50; j++)
        {
            if(s[j].Marks[i] > s[h].Marks[i])
            h = j;
        }

        printf("name of height marks at ct%d = %s", i+1, s[h].Name);
    }
    

    return 0;

}