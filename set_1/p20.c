//C program for swapping of two numbers

#include<stdio.h>
void swap (int*, int*);
int main()
{
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("before swapping, num1= %d, num2= %d", num1, num2);
    swap(&num1, &num2);
    printf("\nafter swapping, num1= %d, num2= %d", num1, num2);
}
void swap (int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}