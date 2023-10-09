#include <stdio.h>>
int main()
{
    int a, j, i;
    printf("enter your value : ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    for (i = a - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = a; i >= 1; i--)
    {
        for (j = 1; j <= a - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i == 1 || i == a || j == 1 || j == a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j || i == 1 || j == 1 || i == a)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a; j++)
        {
            if (i == j || i + j == a + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}