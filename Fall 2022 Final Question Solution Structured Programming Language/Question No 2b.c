#include <stdio.h>

void additems(int items[], int add[], int n);
void openDoor(char password[]);

int main()
{
    int items[1000];
    int add[1000];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
    scanf("%d", &items[i]);
    }

    for(int i = 0; i < n; i++){
    scanf("%d", &add[i]);
    }


    additems(items, add, n);

    char password[100];
    getchar();
    scanf("%[^\n]", password);


    openDoor(password);

    return 0;
}

void additrms(int items[], int add[], int n)
{
    for(int i = 0; i < n; i++)
    {
        items[i] += add[i];
    }
}

void openDoor(char password[])
{
    char ch[] = "Narnia";
    int f = 1;

    for(int i = 0; password[i] != '\0'; i++)
    {
        if(password[i] != ch[i])
        {
            f = 0;
            break;
        }
    }

    if(f == 1)
    printf("Door to Narnia is open.");
    else
    printf("There is no door");
}