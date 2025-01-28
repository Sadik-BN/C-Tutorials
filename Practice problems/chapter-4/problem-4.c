//take input from user untill they input an odd number

#include<stdio.h>

int main()
{
    do
    {   
        int input;     
        printf("Enter an even number:- ");
        scanf("%d",&input);

        printf("You have Entered %d .\n",input);

        if((input%2) != 0)
        {
            break;
        }

    } 
    while (1); //This '1' means the condition of this loop is always true which means this loop is infinite
    
    printf("Loop broken due to entering odd number");

    return 0 ;
}