//Write a c program to check given number is Armstrong number or not
#include<stdio.h>
int length(int);
int power (int, int);
int main()
{
    int num, len, sum=0, rem;
    printf("enter a number: ");
    scanf("%d", &num);
    len=length(num);
    int temp=num;
    while (num>0)
    {
        rem=num%10;
        sum=sum+power(rem, len);
        num=num/10;
    }
    if (sum==temp)
    {
        printf("%d is an armstrong number.", temp);
    }
    else
    {
        printf("%d is not an armstrong number.", temp);
    }
}
int length(int n)
{
    int r, l=0;
    while (n>0)
    {
        r=n%10;
        l++;
        n=n/10;
    }
    return l;
}
int power (int n, int e)
{
    int res=1;
    for (int i=1; i<=e; i++)
    {
        res=res*n;
    }
    return res;
}