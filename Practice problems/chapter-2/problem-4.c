//print the avarage value of two numbers

#include<stdio.h>
int main()
{
    printf("\n\n\n   ***print average value of three numbers***   \n\n");
    float a,b,c;
     printf("enter 1st number: ");
     scanf("%f",&a);
     printf("\nenter 2nd number: ");
     scanf("%f",&b);
     printf("\nenter 3rd number: ");
     scanf("%f",&c);

     printf("\nAverage is: %f\n\n\n",(a+b+c)/3);

     return 0;

}