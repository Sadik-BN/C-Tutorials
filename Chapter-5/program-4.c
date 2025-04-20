//Table of a number using function

#include<stdio.h>

void table(int x);

int main()
{
    int number ;
    printf("Enter a Number to see the table: ");
    scanf("%d",&number);

    table(number);

    return 0;

}

void table(int x)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",x,i,x*i);
    }

}