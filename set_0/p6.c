#include<stdio.h>
int main()
{
    int num, rem, sum=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        rem=num%10;
        if (rem%2==0)
        {
            sum+=rem;
        }
        num/=10;
    }
    printf("the sum of the digits is: %d", sum);
}