#include <stdio.h>

int isEven (int n);
int ComputeEvenSum (int a[], int n);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    int s = ComputeEvenSum(arr, 5);

    printf("%d", s);

    return 0;
}


int ComputeEvenSum (int a[], int n)
{
    int s = 0;
    for(int i = 0; i < n; i++)
    {
        int b = isEven(a[i]);

        if(b == 1)
            s+= a[i];
    }

    return s;
}

int isEven(int n)
{
    if(n % 2 == 0)
    return 1;
    else
    return 0;
}