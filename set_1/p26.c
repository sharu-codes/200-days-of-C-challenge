//Write a c program to convert decimal number to octal number
#include<stdio.h>
void decToOct(int);
int main ()
{
    int num;
    printf ("enter an decimal number: ");
    scanf("%d", &num);
    decToOct(num);
}
void decToOct (int num)
{
    int octal[20];
    int i=0;
    if (num==0)
    {
        printf("Octal: 0");
    }
    else
    {
        while (num>0)
        {
            octal[i]=num%8;
            num=num/8;
            i++;
        }
        printf("Octal: ");
        for (int j=i-1; j>=0; j--)
        {
            printf("%d", octal[j]);
        }
    }
}