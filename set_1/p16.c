// Write a c program to add two numbers without using addition operator
#include<stdio.h>
int add (int, int);
int main()
{
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("%d + %d = %d", num1, num2, add(num1,num2));
}
int add (int a, int b)
{
    if (b>0)
    {
        while (b!=0)
        {
            a++;
            b--;
        }
    }
    else
    {
        while (b!=0)
        {
            a--;
            b++;
        }
    }
    return a;
}