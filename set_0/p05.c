// C program to calculate the sum of the digits of a number

#include<stdio.h>
int main()
{
    int num, rem, sum=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("the sum of the digits is: %d", sum);
}