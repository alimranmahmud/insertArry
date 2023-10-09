#include <stdio.h>
int main()
{
    int i, a[10], maximum, n;
    printf("enter your value : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    maximum = a[0];
    for (i = 0; i < n; i++)
    {
        if (maximum < a[i])
        {
            maximum = a[i];
        }
    }
    printf("maximum Value is %d ", maximum);
}