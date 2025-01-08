//write a program to check a number is divisible by 2
#include<stdio.h>
/*int modulo(int x)
{
    return x%2;
}
int main()
{
    int a,b;
    printf("Enter a number to see if divisible by two or not\n(1 means divisible 0 means not divisible):- ");
    scanf("%d",&a);
    b=modulo(a);
    printf("%d",b==0);
    
    
    return 0;
    
}*/ //used function for test

int main()
{
    printf("\n\n\n   ***Number Divisible by Two***   \n\n");
    int a;
    printf("Enter a number to see if divisible by two or not\n(1 means divisible 0 means not divisible):- ");
    scanf("%d",&a);
    printf("\n%d\n\n\n",a%2==0);
    
    
    return 0;
}