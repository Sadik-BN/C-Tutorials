#include <stdio.h>

int sum(int x, int y);

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);

   printf("%d",sum(n1,n2));

    return 0;
}

int sum(int x,int y)
{
    printf("Summetion is: ");
    return x+y;
}