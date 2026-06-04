// Write a c program to convert hexadecimal number to binary number
#include<stdio.h>
void decToBin (int);
int main()
{
    int hex;
    printf("enter the hexadecimal number: ");
    scanf("%s", &hex);
    printf("the binary equivalent is: ");
    int digits[20], i=0;
    while (hex>0)
    {
        digits[i++]=hex%10;
        hex=hex/10;
    }
    for (int j=i-1; j>=0; j--)
    {
        decToBin(digits[j]);
    }
}
void decToBin (int n)
{
    int binary[4]={0,0,0,0};
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
