//Write a program to calculate cube of a number with comments
#include<stdio.h>
int main()
{
    printf("\n\n\n   ***Cube of A Number***   \n\n\n"); //title
    int a ; //variable declaration

    //user input
    printf("Enter a number to calculate its cube: ");
    scanf("%d",&a);

    //output
    printf("\nCube of '%d' is: %d\n\n\n",a,a*a*a);
/*  In printf function,
       first %d belongs to 'a' 
    and,
       second %d belongs to (a*a*a).
*/

    return 0;
}