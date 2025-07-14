#include <stdio.h>

int main()
{
    FILE *f = fopen("in.txt", "r");
    if(f == NULL)
    {
        printf("Not found\n");
        return 1;
    }

    char ch[10];
    int a, max = 0;

    while(fgets(ch, 10, f))
    {
        if(sscanf(ch, "%d", &a) == 1)
        {
            if(max < a)
            max = a;
        }
    }

    fclose(f);

    FILE *fp = fopen("out.txt", "w");
    if(fp == NULL)
    {
        printf("Not found\n");
        return 1;
    }

    fprintf(fp, "%d", max);

    printf("Successful\n");

    fclose(fp);

    return 0;
}