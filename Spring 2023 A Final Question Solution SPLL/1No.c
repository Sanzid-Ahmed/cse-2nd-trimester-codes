#include <stdio.h>

int is_superprime(int x);
int is_prime(int x);
int digit_sum(unsigned int x);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    for(int i = a; i <= b; i++)
    {
        if(is_superprime(i))
            printf("%d\n", i);
    }

    return 0;
}

int is_superprime(int x)
{
    if(is_prime(x) && is_prime(digit_sum(x)))
    return 1;
    else
    return 0;
}

int is_prime(int x)
{
    for(int i = 2; i < x; i++)
    {
        switch(x % i == 0)
        {
            case 1:
                return 0;
        }
    }
    return 1;
}

int digit_sum(unsigned int x)
{
    int sum = 0;

    while(x != 0)
    {
        sum += x % 10;
        x = x / 10; // reminder x=i write x / 10;
    }


    return sum;
}
