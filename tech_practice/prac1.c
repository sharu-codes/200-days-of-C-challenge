//1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…
#include<stdio.h>
#include<math.h>
int fibo (int);
int is_prime (int);
int nth_prime (int);
int main ()
{
    int n, res;
    printf("enter the range: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        if (i%2==0)
        {
            res=fibo(i/2 + 1);
        }
        else
        {
            res=nth_prime(i/2 + 1);
        }
        printf("%d ", res);
    }
    return 0;
}
int fibo (int n)
{
    int a=0, b=1, temp;
    for (int i=0; i<n; i++)
    {
        temp=a+b;
        a=b;
        b=temp;
    }
    return a;
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
int nth_prime (int n)
{
    int count=0, i;
    for (i=2; ; i++)
    {
        if (is_prime(i)==1)
        {
            count++;
        }
        if (count==n)
        {
            return i;
        }
    }
}