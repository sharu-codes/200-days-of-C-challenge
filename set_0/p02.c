// C program to check if a number is weird or not

#include<stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num%2!=0)
    {
        printf("weird!");
    }
    else
    {
        if (num>=2 && num<=5)
        {
            printf("not weird!");
        }
        else if (num>=6 && num<=20)
        {
            printf("weird!");
        }
        else
        {
            printf("not weird!");
        }
    }
}