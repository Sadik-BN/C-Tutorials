//write a program to check a number two digit or not
#include<stdio.h>
int main()
{
    int a;
    printf("\n\n\n   ***Two Digit Number***   \n\n");
    printf("Enter a number:- ");
    scanf("%d",&a);
    printf("\n%d.   ",a>9 && a<100);
    printf("(1 means two digit 0 means one or multiple digit)\n\n\n");
    return 0;
}