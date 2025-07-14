#include <stdio.h>

int is_prime(int x);
int power_of_2(int x);
int is_mersenne(int x);


int main()
{
    int num;
    scanf("%d", &num);

    int x = is_mersenne(num);

    switch(x)
    {
        case 0:
        printf("No\n");
        break;
        default:
        printf("Yes\n");
    }

    return 0;
}


int is_mersenne(int x)
{
    int a = is_prime(x);
    int b = power_of_2(x);

    switch(a != 0 && b != 0)
    {
        case 0:
        return 1;
        break;
        default:
        return 0;
    }
} 


int is_prime(int x)
{
    int f = 1;
    for(int i = 2; i < x; i++)
    {
        switch(x % i)
        {
            case 0:
            f = 0;
            return f;
        }
    }

    switch (f)
    {
        case 1:
        return f;
    }
}


int power_of_2(int x)
{
    int i 
    if()
}