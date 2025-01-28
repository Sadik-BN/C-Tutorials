//Print the sum 1 to nth natural number using loop and print all of them reversely (সূত্র দিয়েও করা যায়)

#include<stdio.h>
int main()
{
    int sum=0,n;
    printf("\n\n\nEnter range to sum natural number:- ");
    scanf("%d",&n);

    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
        sum=sum+i;
        
    }

    printf("Your sum of first %d natural number is:- %d\n\n\n",n,sum);

    return 0;

}