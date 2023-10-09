#include <stdio.h>
int main()
{
    int i, n, fibo, first = 0, second = 1;

    printf("enter your value : ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            fibo = i;
        }
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }
        printf("%d ", fibo);
    }
}