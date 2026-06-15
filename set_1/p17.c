//. Write a c program to find largest among three numbers using conditional operator

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int largest = (a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("the largest number among %d, %d and %d is %d", a, b, c, largest);
}