#include <stdio.h>
int main()
{
    int a1[10], n, i, a2[10];
    printf("Enter your value  :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    printf("\n A1 = \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a1[i]);
    }
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    printf("\n A2 = \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a2[i]);
    }
}