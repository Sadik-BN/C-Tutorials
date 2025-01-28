//print the table of a number input by user

#include<stdio.h>

int main()
{
    int n;

    printf("\n\nEnter the number you want to see the table:- ");
    scanf("%d",&n);

    printf("\nHere is your table of %d :- \n\n",n);

    for(int i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    printf("\n\n");


    return 0;
}