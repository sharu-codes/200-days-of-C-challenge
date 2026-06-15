// C program to find the Nth prime number

#include<stdio.h>
#include<math.h>
int is_prime (int);
int main()
{
    int N, num=1, count=0;
    printf("enter N: ");
    scanf("%d", &N);
    while (1)
    {
        if (is_prime(num))
        {
            count++;
            if (count==N)
            {
                printf("the %dth prime number is %d", N, num);
                break;
            }
        }
        num++;
    }
}
int is_prime(int n)
{
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i=2; i<=sqrt(n); i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}