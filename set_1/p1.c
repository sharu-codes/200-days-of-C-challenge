//1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 13, 17…. find Nth Term
#include<stdio.h>
#include<math.h>
int fibo(int);
int is_prime(int);
int nth_prime(int);
int main()
{
    int N, result;
    printf("enter the range: ");
    scanf("%d", &N);
    for (int i=1; i<=N; i++)
    {
        if (i%2==1)
        {
            result = fibo((i+1)/2);
        }
        else
        {
            result = nth_prime(i/2);
        }
        printf("%d ", result);
    }
}
int fibo (int n)
{
    int a=0, b=1, temp;
    for (int i=1; i<=n; i++)
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
    int count=0, num;
    for (num=2; ; num++)
    {
        if (is_prime(num)==1)
        {
            count++;
        }
        if (count==n)
        {
            return num;
        }
    }
}