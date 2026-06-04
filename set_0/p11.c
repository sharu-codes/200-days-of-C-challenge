#include<stdio.h>
#include<math.h>
int is_prime (int);
int main()
{
    int num, rem, sum=0;
    printf("enter a number: ");
    scanf("%d", &num);
    while (num>0)
    {
        rem=num%10;
        if (is_prime(rem))
        {
            sum+=rem;
        }
        num/=10;
    }
    printf("the sum of prime digits is: %d", sum);
}
int is_prime (int n)
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