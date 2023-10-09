#include <stdio.h>
// deletation

int main()
{
    int a[100], n, i, j, deleteNumber;
    printf("Enter your value : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nYour result is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nEnter your delete Index Number : ");
    scanf("%d", &deleteNumber);
    for (i = deleteNumber; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    printf("\nYour result is : ");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", a[i]);
    }
}
