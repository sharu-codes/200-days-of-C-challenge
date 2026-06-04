// Write a c program to print ASCII value of all characters.
#include<stdio.h>
int main()
{
    printf("ASCII value of all characters:\n");
    printf("\ncharacter\tASCII\n");
    for (int i=0; i<=255; i++)
    {
        printf("%c\t%d\n", i, i);
    }
}