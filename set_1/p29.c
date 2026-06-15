// Write a c program to convert octal number to decimal number

#include<stdio.h>
int main()
{
    int octal, rem, decimal=0, base=1;
    printf("enter an octal number: ");
    scanf("%d", &octal);
    while (octal>0)
    {
        rem=octal%10;
        decimal=decimal+rem*base;
        base*=8;
        octal/=10;
    }
    printf("the decimal number is: %d", decimal);
}
