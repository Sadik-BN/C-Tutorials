//check if given number is a natural number
#include<stdio.h>
int main ()
{
    int a;
    printf("\n\nEnter a number: ");
    scanf("%d",&a);
    if (a>0)
    {
        printf("\nNatural number\n\n");
    }
    else
    {
        printf("\nNot a natural number\n\n ");
    }
    return 0;
} 