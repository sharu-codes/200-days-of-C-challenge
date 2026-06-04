#include<stdio.h>
int main()
{
    int r, i, j;
    printf("enter a range: ");
    scanf("%d", &r);
    for (int i=r; i>=0; i--)
    {
        for (j=1; j<=r-i; j++)
        {
            printf("  ");
        }
        for (j=1; j<=2*i-1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}