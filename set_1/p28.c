// Write a c program to convert octal number to binary number

#include<stdio.h>
void decToBin (int);
int main()
{
    int octal;
    printf("enter the octal number: ");
    scanf("%d", &octal);
    printf("the binary equivalent is: ");
    int digits[20], i=0;
    while (octal>0)
    {
        digits[i++]=octal%10;
        octal=octal/10;
    }
    for (int j=i-1; j>=0; j--)
    {
        decToBin(digits[j]);
    }
}
void decToBin (int n)
{
    int binary[3]={0,0,0};
    int i=0;
    while (n>0)
    {
        binary[i++]=n%2;
        n=n/2;
    }
    for (int j=i-1; j>=0; j--)
    {
        printf("%d", binary[j]);
    }
}
