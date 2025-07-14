#include <stdio.h>

int main()
{
    int n;
    float A, HW, CT, MT, TF, result;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%f%f%f%f%f", &A, &HW, &CT, &MT, &TF);

        result = A * 0.05 + HW * 0.1 + CT * 0.15 + MT * 0.3 + TF * 0.4;

        if(result >= 90 && result <= 100)
            printf("Student %d: A\n", i);
        else if(result >= 86 && result <= 89)
            printf("Student %d: A-\n", i);
        else if(result >= 82 && result <= 85)
            printf("Student %d: B+\n", i);
        else if(result >= 78 && result <= 81)
            printf("Student %d: B\n", i);
        else if(result >= 74 && result <= 77)
            printf("Student %d: B-\n", i);
        else if(result >= 70 && result <= 73)
            printf("Student %d: C+\n", i);
        else if(result >= 66 && result <= 69)
            printf("Student %d: C\n", i);
        else if(result >= 62 && result <= 65)
            printf("Student %d: C-\n", i);
        else if(result >= 58 && result <= 61)
            printf("Student %d: D+\n", i);
        else if(result >= 55 && result <= 57)
            printf("Student %d: D\n", i);
        else
            printf("Student %d: F\n", i);
    }
    return 0;
}
