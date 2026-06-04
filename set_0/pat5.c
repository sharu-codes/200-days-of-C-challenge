#include<stdio.h>
int main()
{
    int r, i, j;
    printf("enter a range: ");
    scanf("%d", &r);
    for (i=1; i<=r; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("* ");
        }
        for (j=1; j<=2*(r-i)-1; j++)
        {
            printf("  ");
        }
        for (j=1; j<=(i==r?i-1:i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}