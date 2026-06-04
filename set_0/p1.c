#include<stdio.h>
int main()
{
    int num;
    printf("enter a number: ");
    scanf("%d", &num);
    printf("%d is an %s number\n", num, (num % 2 == 0) ? "even" : "odd");
}