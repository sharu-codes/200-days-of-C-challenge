//Write a c program to find out L.C.M. of two numbers

#include<stdio.h>
int main ()
{
    int num1, num2, lcm;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int max=(num1>num2)?num1:num2;
    while(1)
    {
        if (max%num1==0 && max%num2==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("the LCM of %d and %d is %d", num1, num2, lcm);
}