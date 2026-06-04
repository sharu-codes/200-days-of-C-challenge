#include<stdio.h>
int main()
{
    int r, i, j;
    printf("enter a range: ");
    scanf("%d", &r);
    for (i=1; i<=r; i++)
    {
        for (j=1; j<=r-i; j++)
        {
            printf("  ");
        }
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (i=r-1; i>0; i--)
    {
        for (j=1; j<=r-i; j++)
        {
            printf("  ");
        }
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}