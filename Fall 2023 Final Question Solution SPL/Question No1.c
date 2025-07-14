#include <stdio.h>

void updateBalance(float b[], int id, int t, float a);


int  main()
{
    float b[100];
    printf("Enter the balance:\n");
    for(int i = 0; i < 100; i++)
    {
        scanf("%f", &b[i]);
    }

    int id;
    printf("Enter the customer ID: ");
    scanf("%d", &id);


    int type;
    printf("Enter transaction type 1 for withdrawal and 2 for deposit: ");
    scanf("%d", &type);

    float amount;
    printf("Enter transiction amount: ");
    scanf("%f", &amount);

    updateBalance(b, id, type, amount);

    return 0;
}

void  updateBalance(float b[], int id, int t, float a)
{
    if(t == 1)
    {
        if(b[id] < a)
        {
            printf("Not sufficiant balance and do not active the withdrawal");
        }
        else
        {
            b[id] = b[id] - a;
            printf("transaction is successful\n");
            printf("New balace is: %f", b[id]);
        }
    }
    else if(t == 2)
    {
        b[id] += a;
        printf("deposit is successful\n");
        printf("New balace is: %f", b[id]);
    }
    else
        printf("Invalis transiction type\n");
}