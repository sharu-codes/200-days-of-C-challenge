//Replace all 0’s with 1 in a given integer.

#include<stdio.h>
int main()
{
    char num[20];
    int i;
    printf("enter a number of base 2: ");
    scanf("%s", num);
    i=0;
    while (num[i]!='\0')
    {
        if (num[i]=='0')
        {
            num[i]='1';
        }
        else if (num[i]=='1')
        {
            num[i]='0';
        }
        else
        {
            printf("enter valid number of base 2");
        }
        i++;
    }
    printf("\nthe number is %s", num);
}