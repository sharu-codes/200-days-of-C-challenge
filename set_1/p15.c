//Write a c program to find out power of number.

#include<stdio.h>
float power (int, int);
int main()
{
    int num, exp;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("enter the exponent: ");
    scanf("%d", &exp);
    printf("%d^%d = %0.2f", num, exp, power(num, exp));
}
float power (int x, int y)
{
    if (y==0)
    {
        return 1;
    }
    else if (y==1)
    {
        return x;
    }
    else if (x==0)
    {
        return 0;
    }
    else if (x==1)
    {
        return 1;
    }
    else if (y>1)
    {
        return x*power(x, y-1);
    }
    else if (y<0)
    {
        return (1.0/x)*power(x,y+1);
    }
}