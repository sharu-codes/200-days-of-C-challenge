#include<stdio.h>
#include<math.h>
int main ()
{
    int num, i, flag=1;
    printf("enter a number: ");
    scanf("%d", &num);
    if (num<2)
    {
        printf("%d is not a prime number", num);
    }
    else
    {
        for (i=2; i<=(sqrt(num)); i++)
        {
            if (num%i==0)
            {
                flag=0;
                break;
            }
        }
        if (flag==0)
        {
            printf("%d is a not prime number", num);
        }
        else
        {
            printf("%d is a prime number", num);
        }
    }
}