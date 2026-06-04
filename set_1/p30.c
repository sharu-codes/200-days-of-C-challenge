//Write a c program to convert octal number to hexadecimal number.
#include<stdio.h>
int octToDec (int);
void decToHex (int);
int main()
{
    int oct;
    printf("enter an octal number: ");
    scanf("%d", &oct);
    int decimal=octToDec(oct);
    decToHex (decimal);
}
int octToDec (int n)
{
    int rem, dec=0, base=1;
    while (n>0)
    {
        rem=n%10;
        dec=dec+rem*base;
        base*=8;
        n/=10;
    }
    return dec;
}
void decToHex (int num)
{
    char hex[20];
    int i=0;
    while (num>0)
        {
        int r=num%16;
        if (r<10)
        {
            hex[i]=r+'0';
        }
        else if (r>=10 && r<16)
        {
                hex[i]=r-10+'A';
        }
        num=num/16;
        i++;
    }
    printf("the hexadecimal equivalent is: ");
    for (int j=i-1; j>=0; j--)
    {
        printf("%c", hex[j]);
    }
}