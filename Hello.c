# include <stdio.h>
int main()
{
   //***Chapter-1***
   printf("\n\n***chapter-1***\n\n\n");
   //


    printf("Hello World\n\n"); //first code print


    //data types
    int age=21;
    float pi=3.1416;
    char star='*' ;
    //declearing data types in one line
    int a,b,c ;
    a=2;
    b=3;
    c=6;
  /*(note:-once decleared data types no need to declear again
     simply write the variable like above)*/
    

    //this is single line comment

    /*this is multiple line comment*/


     
     /*used '\n' to break line that means it will show outputs
     line by line.*/
    printf("hello c \n");
    printf("hello adnan \n");
    printf ("hello Bangladesh\n\n");


    //printing a variable and breaking line in a single printf function
    printf("age is %d \nstar look like %c \nvalue of pi is %f \n",age,star,pi);
    printf("a=%d \nb=%d \nc=%d \n\n",a,b,c);
    //note:-(format specifier and the variable name must be in same serial)


    //input function
    float input;
    printf("enter any number:-\n");
    scanf("%f",&input);
    printf("you entered %f \n\n",input);


    //simple addition program using knnowledge from above
    float x,y;
    printf("*Summetion program* \n");
    printf("Enter a number:- ");
    scanf("%f",&x);
    printf("Enter another number:- ");
    scanf("%f",&y);
    float sum = x+y ;
    printf("Summetion of those numbers is %f\n",sum);
    //or derectly without help of sum variable
    //printf ("Summetion of those number is %f\n",x+y);
    //this command can be written


    return 0;
}