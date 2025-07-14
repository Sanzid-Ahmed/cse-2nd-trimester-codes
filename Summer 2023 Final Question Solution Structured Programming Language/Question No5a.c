#include <stdio.h>

int main()
{
    FILE *f = fopen("Sample.txt", "r");
    if(f == NULL)
    {
        printf("Not found\n");
        return 1;
    }

    int arr[100];
    int a, i = 0;
    while(fscanf(f, "%d", &a) == 1)
    {
        arr[i] = a;
        i++;
    }

    int sum = 0;

    for(int j = 0; j < i; j++)
    {
        if(arr[j] % 4 == 0)
        sum += arr[j];
    }

    fclose(f);

    FILE *fp = fopen("Output.txt", "w");
    if(fp == NULL)
    {
        printf("Not found\n");
        return 1;
    }

    fprintf(fp, "Sum: %d", sum);
    printf("Successful\n");

    fclose(fp);
    return 0;
}