// write a program to print the smallest number

#include<stdio.h>
#include<stdlib.h> //standard library <stdlib> header file included for abs() function => পরমমান এর ফাংশন
int main()
{
    printf("\n\n\n   ***Smallest Number Using Only Arithmetics***   \n\n");
    int a,b,small;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("\nEnter another number: ");
    scanf("%d",&b);

    small=((a+b)-abs(a-b))/2;
    printf("\nThe smallest number is: %d\n\n\n",small);

    return 0;
}
//it's a new operation for me
//details of arithmetic operation of this program is in notebook.