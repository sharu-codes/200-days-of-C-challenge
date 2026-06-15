//Write a c program to find out sum of digit of given number.

#include<stdio.h>
int main()
{
    int num, rem, sum=0;
    printf("enter a number: ");
    scanf("%d", &num);
    int temp=num;
    while (num>0)
    {
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("the sum of all digits in %d is %d", temp, sum);
}