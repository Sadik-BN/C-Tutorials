#include<stdio.h>
int main()
{
                   //conditional staement


//if-else
 
int age ;
printf("\nEnter Your age: ");
scanf("%d",&age);
if(age>=18)
{
    printf("\nYou are an adult.You can vote.\n");
}
else
{
    printf("\nYou are not adult.You can't vote.\n");
}
printf("\nThank you\n\n");

//else if
                  
//grading system 
printf("\n         ***Grading System***   ");
float  pass,marks,full;
printf("\n\nEnter the total mark of your exam: ");
scanf("%f",&full);
printf("\nEnter the pass mark of your exam (Any number less than 40 percent of your total number): ");
scanf("%f",&pass);

printf("\n  Enter your obtained marks: ");
scanf("%f",&marks);
printf("\nYou got ");
 if(pass>(full*0.4) || pass==0)
 {
    printf("nothing to show.Invalid number entered.\nYou got a F in math I guess.\n");
 }
 else if(marks>=(full*0.9) && marks<=full)
 {
    printf("A++\n");
 }
 else if(marks<(full*0.90) && marks>=(full*0.80))
 {
    printf("A+\n");
 }
 else if(marks<(full*0.80) && marks>=(full*0.70)) 
 {
    printf("A\n");
 }
 else if(marks<(full*0.70) && marks>=(full*0.60))
 {
    printf("A-\n");
 }
 else if (marks<(full*0.60) && marks>=(full*0.50))
 {
    printf("B\n");
 }
 else if (marks<(full*0.50) && marks>=pass)
 {
    printf("C\n");
 }
 else if (marks<pass && marks>=0)
 {
    printf("F.\nYou failed dumb ass\n");
 }
 else
 {
    printf("nothing to show.Invalid number entered.\nYou got a F in math I guess.\n");
 }
 printf("\nThank you\n\n");
 printf("***********************************************\n\n\n");
 


                 //Ternary operator
printf("Enter Your age: ");
scanf("%d",&age);
age>=18 ? printf("\nYou can vote.\n\n\n") : printf("\nYou are too young to vote\n\n\n") ;                



                  //Switch-case

int day ;
printf("Enter day (1-7): ");
scanf("%d",&day);
switch(day)
{
   case 1:printf("\nSaturday\n\n\n");//for charecter value writting method is:-
      break;                         // case 's' : printf(... ...);
   case 2:printf("\nSunday\n\n\n");
      break;
   case 3:printf("\nMonday\n\n\n");
      break;      
   case 4:printf("\nTuesday\n\n\n");
      break;
   case 5:printf("\nWednesday\n\n\n");
      break;
   case 6:printf("\nThursday\n\n\n");
      break;
   case 7:printf("\nFriday\n\n\n");
      break;
   default:printf("\nAre you dumb or something?!\nI said input only from 1 to 7.\n\n\n");            
}



                     //Nested if,switch (details in notebook)
int number;
printf("Enter a number: ");
scanf("%d",&number);
if(number>=0)
{
   printf("\nPositive\n");
   if(number%2==0)
   {
      printf("\nEven\n\n\n");
   }
   else
   {
      printf("\nOdd\n\n\n");
   }
}
else
{
   printf("\nNegative\n\n\n");
}                     
return 0;

}