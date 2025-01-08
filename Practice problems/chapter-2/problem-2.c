//write a program to check the number is even or odd
#include<stdio.h>
int main()
{
    int a;
    printf("\n\n\n   ***Odd or Even Number***   \n\n");
    printf("Enter the number (1 means odd 0 means even):- ");
    scanf("%d",&a);
    printf("\n%d\n\n\n",a%2 != 0);
    return 0;
}
