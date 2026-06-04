// Write a c program to reverse any number.
#include<stdio.h>
int main()
{
    int num, rem, rev=0;
    printf("enter a number: ");
    scanf("%d", &num);
    int temp=num;
    while (num>0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num/=10;
    }
    printf("the reverse of %d is %d", temp, rev);
}