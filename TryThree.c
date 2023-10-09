#include <stdio.h>
int main()
{
    int n, find = 0, i;
    int a[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    printf("Enter Your Value : ");
    scanf("%d", &n);
    for (i = 0; i < 10; i++)
    {
        if (n == a[i])
        {
            find++;
            break;
        }
    }
    if (find == 0)
    {
        printf("Your value is not match");
    }
    else
    {
        printf("enter your value is match");
    }
}