//How to convert string to int without using library functions in c.

#include<stdio.h>
int str_to_int (char[]);
int main()
{
    char str[10];
    printf("enter a string: ");
    scanf("%s", str);
    printf("the converted integer is: %d", str_to_int(str));
}
int str_to_int (char str[])
{
    int i=0, num=0, sign=1;
    if (str[0]=='-')
    {
        sign=-1;
        i=1;
    }
    while (str[i]!='\0')
    {
        num=num*10 + (str[i]-'0');
        i++;
    }
    return (sign*num);
}