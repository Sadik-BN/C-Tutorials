// suaring a number using library function

#include<stdio.h>
#include<math.h>

int main()
{
    int number;
    
    printf("Enter a number to square it: ");
    scanf("%d",&number);

    printf("Square of %d is %.0f",number,pow(number,2));
    //%.0f means it will print 0 number or no number after "." Decimal point.
    //if we write %.3f it will print 3 numbers after "." decimal point.
    // we used %f becase pow() funtion always returns double(larger float) type value. 
    //but can take an int value and automaticaly converts it to double so variable "number" is int data type.
    return 0;
}