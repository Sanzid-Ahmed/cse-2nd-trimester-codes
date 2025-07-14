#include <stdio.h>

int main()
{
    int n, r, a = 1, b = 1, c, d = 1;
    scanf("%d%d", &n, &r);

    c = n - r;

    for(int i = n, j = r; i > 0; i--, j--) //int i = n, int j = r is wrong declaration
    {
        a *= i;
        b *= j;
        d *= c;
        c--;
    }
    printf("%d", a/(b*d));

    return 0;
}
