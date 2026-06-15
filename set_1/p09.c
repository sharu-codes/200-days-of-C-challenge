//Write a c program to print Fibonacci series of given range.

#include<stdio.h>
int main()
{
    int n, n1=0, n2=1, nt;
    printf("enter the range: ");
    scanf("%d", &n);
    printf("the fibonacci series is: ");
    for (int i=1; i<=n; i++)
    {
        printf("%d ", n1);
        nt=n1+n2;
        n1=n2;
        n2=nt;
    }
}