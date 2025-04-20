#include <stdio.h>

int sum(int n);

int main()
{
    int num,x;
    printf("Enter a Number: ");
    scanf("%d",&num);

    x=x+sum(num);

    printf("%d",x);
}

int sum(int n)
{
    
    if(n == 0)
        return 0;
    
    return n;

    sum(n-1);
}