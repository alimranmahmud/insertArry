#include <stdio.h>
int main()
{
    int a[10], i, n, sum = 0;
    printf("enter your value : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum = %d \n", sum);
    printf("Average Number = %d ", sum / n);
}