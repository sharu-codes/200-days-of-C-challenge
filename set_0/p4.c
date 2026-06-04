#include<stdio.h>
int main ()
{
    int num, arr[10], i=0, count=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        arr[i]=(num%10);
        num/=10;
        i++;
        count++;
    }
    printf("the digits are: ");
    for (i=count-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
}