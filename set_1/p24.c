//Write a c program to find out H.C.F. of two numbers
#include<stdio.h>
int main ()
{
    int num1, num2, temp;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int a=num1, b=num2;
    while (num2!=0)
    {
        temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    printf ("the GCD of %d and %d is %d", a, b, num1);
}