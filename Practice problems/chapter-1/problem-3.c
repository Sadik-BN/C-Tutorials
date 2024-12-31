//Write a program to measure perimeter of a rectangle with comments

#include<stdio.h>
int main()
{
    printf("\n\n\n ***Perimeter of A Rectangle***\n\n\n"); //Title

    float a,b; //declaring data type for side of rectangle.

    //taking side lenth from user
    printf("Enter one side of a rectangle (m): ");
    scanf("%f",&a);
    printf("\nEnter another side of that rectangle (m): ");
    scanf("%f",&b);

    //algorithm & result
    printf("\nPerimeter is: %f meters\n\n\n",2*(a+b));

    return 0;

}