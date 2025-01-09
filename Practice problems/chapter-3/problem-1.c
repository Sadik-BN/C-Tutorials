//write a program to check an alphabet upper case or lower case
#include<stdio.h>
int main()
{
    char alpha;
    printf("\n\n\nEnter an alphabet: ");
    scanf("%c",&alpha);

    if(alpha>=65 && alpha<=90) //upper case ASCII decimal value range (65-90)
//or,if(alpha>='A' && alpha<='Z') both will work.
    {                         
        printf("\nThis is upper case\n\n\n");
    }
    else if (alpha>=97 && alpha<=122)//lower case ASCII decimal value range (97-122)
//or,else if(alpha>='a' && alpha<='z') both will work
    {
        printf("\nThis is lower case\n\n\n");
    }
    else
    {
        printf("\nInvalid alphabet\n\n\n");
    }
    return 0;
}