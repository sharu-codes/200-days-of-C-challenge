//0,0,2,1,4,2,6,3,8,4,10,5,12,6,14,7,16, 8... find Nth Term

#include<stdio.h>
int main()
{
    int N, res, i;
    printf("enter the range: ");
    scanf("%d", &N);
    for (i=0; i<N; i++)
    {
        if (i%2!=0)
        {
            res=i/2;
        }
        else
        {
            res=i;
        }
        printf("%d ", res);
    }
}