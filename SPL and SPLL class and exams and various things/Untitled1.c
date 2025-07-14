#include <stdio.h>

int main()
{
int n;
scanf("%d", &n);

if(n % 2 == 0)
printf("Enter an odd number");

int arr[n];
int mid = (n-1)/2;

for(int i = 0; i < n; i++)
{
scanf("%d", &arr[i]);
}

for(int i = 0; i < (mid - 1)/2; i++)
{
int temp = arr[i];
arr[i] = arr[mid -1 - i];
arr[mid - 1 - i] = temp;
}

for(int i = n - 1, a = 0; i > (mid - 1)/2; i--, a++)
{
int temp = arr[i];
arr[i] = arr[mid + 1 + a];
arr[mid + 1 + a] = temp;
}

for(int i = 0; i < n - 1; i++)
{
printf("%d", arr[i]);
}

return 0;
}
