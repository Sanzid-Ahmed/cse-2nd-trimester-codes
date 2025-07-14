#include <stdio.h>

int main()
{
    int arr[4][4];
    
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[0][3] = 4;

    arr[1][0] = 5;
    arr[1][1] = 6;
    arr[1][2] = 0;
    arr[1][3] = 6;

    arr[2][0] = 0;
    arr[2][1] = 2;
    arr[2][2] = 1;
    arr[2][3] = 3;

    arr[3][0] = 1;
    arr[3][1] = 4;
    arr[3][2] = 6;
    arr[3][3] = 2;


    int s = 0;
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(j == 0 || j == 3)
            s += arr[i][j];
            else if(j != 0 && j != 3 && j == i)
            s += arr[i][j];
        }
    }

    printf("Sum = %d", s);


    return 0;
}