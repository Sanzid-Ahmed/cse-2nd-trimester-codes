#include <stdio.h>

int main()
{
    char name[] = "Sample.txt";

    FILE *f = fopen(name, "r");
    if(f == NULL){
        printf("No file found\n");
        return 1;
    }


    int sum = 0;
    int a;

    while(fscanf(f, "%d", &a) == 1)
    {
        if(a % 7 == 0)
            sum += a;
    }

    fclose(f);

    FILE *fp = fopen("Output.txt", "w");
    if(fp == NULL){
        printf("Unsuccessful\n");
        return 1;
    }

    fprintf(fp, "Sum: %d", sum);

    printf("Successful\n");

    fclose(fp);

    return 0;
}