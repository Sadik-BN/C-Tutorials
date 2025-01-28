//Print factorial of n number

#include<stdio.h>

int main()

{
    int n,m=1;
    printf("Enter number to get factorial: ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        m=m*i;
    }

    printf("Factorial of %d is %d.",n,m);

    return 0;
}