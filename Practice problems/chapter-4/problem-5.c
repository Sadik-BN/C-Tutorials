//take input from user untill they input a number which is multiple of 7

#include<stdio.h>

int main()
{
    do
    {   
        int input;     
        printf("Enter a number:- ");
        scanf("%d",&input);

        printf("You have Entered %d .\n",input);

        if((input%7) == 0)
        {
            break;
        }

    } 
    while (1); //This '1' means the condition of this loop is always true which means this loop is infinite
    
    printf("Loop broken due to entering a number multiple of 7");

    return 0 ;
}