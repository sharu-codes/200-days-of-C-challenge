//Write a c program to check given number is palindrome number or not

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
        num=num/10;
    }
    if (rev==temp)
    {
        printf("%d is a palindrome number.", temp);
    }
    else
    {
        printf("%d is not a palindrome number.", temp);
    }
}