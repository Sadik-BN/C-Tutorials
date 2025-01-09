#include<stdio.h>
int main()
{
    int start;
    printf("\n\n\nThis is a grading system program.\n\nWARNING!!\nYou may get emotional damage\nfrom your computer if your grade\nis too bad or if you try to misguide this program.\nSo use at your own risk.\n\nEnter 1 to start or 0 to discharge: ");
    scanf("%d",&start);
    switch (start)
    {
    case 1:
        printf("\n\n\n         ***Grading System***   ");
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
        printf("***********************************************\n\n\n");

        break;
    case 0:
        printf("\n\nAs your wish.Good bye and have a nice day.\n\n\n");
        break;
    default:
        printf("\n\nWhat would I do with %d.I said 1 to start 0 to discharge.\nAnyway I don't like to waste my valuable time for an idiot like you.\nBye.\n\n\n",start);
        break;
    }
    return 0 ;   
}
