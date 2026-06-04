//Write a c program to convert decimal number to hexadecimal number
#include<stdio.h>
void decToHex(int);
char switch_case (int);
int main ()
{
    int num;
    printf ("enter an decimal number: ");
    scanf("%d", &num);
    decToHex(num);
}
void decToHex (int num)
{
    char hex[20];
    int i=0;
    if (num==0)
    {
        printf("Octal: 0");
    }
    else
    {
        while (num>0)
        {
            int r=num%16;
            if (r<10)
            {
                hex[i]=r+'0';
            }
            else if (r>=10 && r<16)
            {
                hex[i]=switch_case(r);
            }
            num=num/16;
            i++;
        }
        printf("Hexadecimal: ");
        for (int j=i-1; j>=0; j--)
        {
            printf("%c", hex[j]);
        }
    }
}
char switch_case (int a)
{
    switch(a)
    {
        case 10:
        {
            return 'A';
            break;
        }
        case 11:
        {
            return 'B';
            break;
        }
        case 12:
        {
            return 'C';
            break;
        }
        case 13:
        {
            return 'D';
            break;
        }
        case 14:
        {
            return 'E';
            break;
        }
        case 15:
        {
            return 'F';
            break;
        }
    }
}