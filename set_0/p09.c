// C program to print all prime numbers between two given numbers

#include<stdio.h>
#include<math.h>
int is_prime (int);
int main()
{
    int up, low;
    printf("enter the lower and upper limit: ");
    scanf("%d %d", &low, &up);
    printf("the prime numbers between %d and %d is/are: ", low, up);
    for (int i=low; i<=up; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
        }
    }
}
int is_prime (int n)
{
    if (n<2)
    {
        return 0;
    }
    else
    {
        for (int i=2; i<=sqrt(n);i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}