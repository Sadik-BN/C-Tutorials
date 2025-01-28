//check a number if digit or not
#include<stdio.h>
int main ()
{
    char a;
    printf("\n\n\nEnter the charecter: ");
    scanf("%c",&a);
    if(a>='0' && a<='9')
    {
        printf("%c is a Digit\n\n",a);    
    }
    else
    {
        printf("%c is not a digit\n\n",a);
    }
    return 0;
}