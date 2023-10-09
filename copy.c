#include <stdio.h>
int main()
{
    int i, a2[10];
    int a1[10] = {12, 45, 56, 64, 234, 45, 23};
    printf("Your Value Is : \n");
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a1[i]);
    }
    printf("\n");
    for (i = 0; i < 7; i++)
    {
        a2[i] = a1[i];
    }
    for (i = 0; i < 7; i++)
    {
        printf("%d ", a2[i]);
    }
}