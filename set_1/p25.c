// Write a c program to convert decimal number to binary number. 

#include<stdio.h>
void decToBin(int);
int main()
{
    int num;
    printf("enter a decimal number: ");
    scanf("%d", &num);
    decToBin(num);
}
void decToBin (int num)
{
    int binary[20];
    int i=0;
    if (num==0)
    {
        printf("Binary: 0");
    }
    else
    {
        while (num>0)
        {
            binary[i]=num%2;
            num=num/2;
            i++;
        }
        printf("Binary: ");
        for (int j=i-1; j>=0; j--)
        {
            printf("%d", binary[j]);
        }
    }
}