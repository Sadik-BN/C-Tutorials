#include<stdio.h>
int main()
{
    //for loop
    
    //hello world 5 times
    for(int i=1 ; i<=5 ; i+=1) // i is a iterator or counter variable
    {
        printf("hello world\n");
    }
    printf("\n");
    
    //1-100 number print
    for (int i=1 ; i<=100 ; i=i+1) 
    {
        
        printf("%d\n",i);
    }
    printf("\n");


    //increment operator
    //i++ (post increment- use , then increase)
    int i=1;
    printf("%d",i++);//it will print the value of i first,then assign (i+1) to i
    printf("\n%d\n\n",i);//then if we print, it will show the value of (i+1)
    //++i (pre increment- increase then use)
    i=1;
    printf("%d\n\n",++i);//here it will first take the value of i as (i+1) then print the i which is equals to (i+1)
   /*
        decrement operator will work same 
        --i= pre decrement:- decrease, then use
        i--= post decrement:- use then decrease
   */
    printf("\n");

    //characters in for loop
    for(char i='A';i<='Z';i++)
    {
        printf("%c\n",i);
    }
    printf("\n\n");



    //while loop
    int p=1;
    while(p<=5)
    {
        printf("%d\n",p);
        p++;
    }
    printf("\n\n")   ;


    //Do while loop
    int q=1;
    do  
    {
        printf("%d \n",q);
        q++;
    }
    while(q<=5);
    printf("\n\n")   ;


    //Break statement

    for(int i=1 ; i<=5;i++)
    {
        if(i==4)
        {
            break; //loop will break in i==4 condition
        }
        printf("%d\n",i);
    }
    printf("loop broken\n\n\n");


    //Continue statement
    
    for(int i=1;i<=5;i++)
    {
        if(i==3)
        {
            continue; //this will skip the number '3'
        }

        printf("%d\n",i);

    }
    printf("\n\n\n");    
    
    
    
    
    return 0;

}