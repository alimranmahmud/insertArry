#include <stdio.h>
int main()
{
    int i, j, n, count = 0;
    int number[10];
    printf("enter your value : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &number[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (number[i] == number[j])
            {
                count++;
                break;
            }
        }
    }
    printf("double number count =  %d \n", count);
    if (count == 0)
    {
        printf("here number is no double\n");
    }
    else
    {
        printf("Here number is double");
    }
}