#include <stdio.h>
int main()
{
    int n, i, number[10];
    printf("enter your number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d ", number[i]);
    }
}
