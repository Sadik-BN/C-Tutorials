//Write a program to calculate area of a circle

#include <stdio.h>
int main()
{
    printf("\n\n\n   ***Area of A Circle***   \n\n");
    float a;
    float pi=3.1416;
    printf("Enter radius of a circle (m):- ");
    scanf("%f",&a);
    float area= pi*a*a;
    printf("\nThe area is %f meter square.\n\n\n",area);
    return 0 ;
}