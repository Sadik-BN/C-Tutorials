#include<stdio.h>
 int main()
 {
    for(int a=1 ; a<=20 ; a=a+1)
    {
        printf("Table for %d: \n\n",a);
        for(int i=1 ; i<= 10 ;i=i+1)
        {
            int ans = a*i ;
            printf("%d * %d = %d\n",a,i,ans);
        }
        printf("\n\n");
    }
    return 0;
 }