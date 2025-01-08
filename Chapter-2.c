#include<stdio.h>
int main()
{
    //Instruction

    //type declaration instruction
    //valid instructions:-
    int a=22;
    int b=a;
    int c=b*6;
    int p,q=3,r,s=1;//this means p,q,r and s are integer also q=3 & s=1 but p & r has no value assigned.
    
    int  x,y,z;
    x=4,y=3,z=1;
    //or,
    x=y=z=12;

    //Arithmetic instruction
    int A=3,B=4;
    int sum=A+B;
    int multiply=A*B;//here a,b are operands +,* are operator
    /* single vairyable which store arithmetic equations 
    (ex:sum,multiply) should always have to in left side
    of the equation.
    */ 

   //type conversion

    //implicit conversion:-
    //compiler will convert the data type of a value according to rules of below
   printf("%d\n",3*2);/*two operands are integer, here output will integer 
                    automatically.format specifier should be written according
                    to this rule */
   printf("%f\n",3.0*2);/*one oparend is float and another is int
                        according to conversion rule output will in float
                        automatically.so format specifier should be %f*/

   printf("%f\n",3.0*2.0);/*two operands are in float formation so according 
                          to rule output will in float automatically.So 
                          format specifier should be %f */
    //special case:-
    printf("%d\n",3/2);   //here output should be 1.5 which is a float value
    printf("%f\n\n",3.0/2); /*but acoording to rule 3 and 2 are int value so
                          output will also in int value so desimal point will
                          now show in output.it will print only 1 not 1.5 .
                          in order to print the float output we need to make an
                          operand, float, adding .0 after that like 3.0 or 2.0
                          this will allocate a float memory space for output and 
                          will print 1.5000 . */                                              

//Explicit conversion
//compiler can't convert data type of any value so user have to force compiler to convert
int value= (int) 3.9999; /*here we forced compiler to take 3.9999 as a
                           integer value*/

printf("%d\n\n\n",value);//so it will print integer value of 3.9999 which is only 3 .

//operator priority:
// (*,/,%) > (+,-) > (=) compiler will calculate any math in this order
//if compiler find same priority operator in same line it will calculate the line left to right like below
printf("%d\n",4*3/6*2);//first it will calculate  4*3=12 then 12/6=2 then 2*2=4 wich is the answer.
//practice example
printf("%d\n",4+4*2/8-2*6/2*6);//ans=-31
printf("%d\n",5*2-2*3); //ans=4
printf("%d\n",5*2/2*3);//ans=15
printf("%d\n",5*(2/2)*3);//ans=15
printf("%d\n\n\n",5+2/2*3);//ans=8


                //Relational operators
//equals to (==)                
printf("%d\n",4==4);
printf("%d\n\n",3==4);
//output will be according to the statements (4==4,3==4)
//if the statement true output will 1
//if false output will 0

//grater than , greater than or equal (>,>=)
printf("%d\n",4>3);
printf("%d\n",3>4);
printf("%d\n\n",4>=4);

//less than ,less than or equal (<,<=)
printf("%d\n",6<7);
printf("%d\n",8<7);
printf("%d\n\n",7<=7);

//not equals to
printf("%d\n",2!=3);
printf("%d\n\n",2!=2);


                  //logical operator

//logical and
printf("%d\n",(2<3)&&(3<5));
printf("%d\n\n",(2<3)&&(5<3));

//logical or
printf("%d\n",(2<3)&&(3<5));
printf("%d\n\n",(2<3)&&(3<5));

//logical not
printf("%d\n\n\n",!(23==23)); // '!' will always be placed in very left side of a statement


                   //assignment operator

/* assignments p=q, 
              p+=q,
              p-=q,
              p*=q,    
              p/=q,
              p%=q,
              p*=q+r/s  (compiler will first solve the equation 
                         or take the value from the right side ex:- from above q and (q+r/s)
                         then it will calculate the addition,substraction,multiplication,devidetion,modulation of above result with the variable
                         in left side=>(p) according to sign then the result will also assigned to that variale (p).
//more details in notebook
*/


}