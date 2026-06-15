//. Program to find largest of n numbers in c.

#include<stdio.h>
int main()
{
    int n, num, i, max;
    printf("enter a range: ");
    scanf("%d", &n);
    printf("enter number 1: ");
    scanf("%d", &num);
    max=num;
    for (i=2; i<=n; i++)
    {
        printf("enter number %d: ", i);
        scanf("%d", &num);
        if (num>max)
        {
            max=num;
        }
    }
    printf("the largest number is %d", max);
}