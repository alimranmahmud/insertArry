#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, fibo;
    printf("enter your value : ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
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