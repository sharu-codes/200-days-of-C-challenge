//Given a maximum of four digits to the base 17 (10 – A, 11 – B, 12 – C, 13 – D … 16– G} as input, output its decimal value.
//input – 1A
//Expected Output – 27

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char num[10];
    printf("enter a number maximum of four digit of base 17: ");
    scanf("%s", num);
    int dec=0, digit, i=0;
    while (num[i]!='\0')
    {
        if (num[i]>='0' && num[i]<='9')
        {
            digit=num[i]-'0';
        }
        else
        {
            digit=num[i]-'A'+10;
        }
        dec=(dec*17)+digit;
        i++;
    }
    printf("\nthe decimal number is: %d", dec);
}