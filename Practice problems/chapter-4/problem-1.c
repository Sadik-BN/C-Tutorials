//Print one number till another defined by user 


#include<stdio.h>
int main()
{
int start,end,increment;

printf("Enter starting number:- ");
scanf("%d",&start);
printf("Enter ending number:- ");
scanf("%d",&end);
printf("Enter Increment:- ");
scanf("%d",&increment);
printf("\nHere are your numbers:- ");
while(start<=end)
{
    printf("%d ",start);

    start=start+increment;
}
printf("\n\n");

return 0;
}