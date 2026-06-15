// C program to calculate the total number of cups a user can get based on the number of caps they bought

#include<stdio.h>
int main()
{
    int cups, extra_cups;
    printf("enter the number of caps the user bought: ");
    scanf("%d", &cups);
    extra_cups = 0;
    if (cups>=6)
    {
        extra_cups=cups/6;
    }
    printf("the total number of cups is %d", cups+extra_cups);
}