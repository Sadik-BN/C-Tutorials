#include<stdio.h>

void morning();
void buendia();

int main()
{
    char ch;
    printf("English 'E' or Spanish 'S'?\n");
    scanf("%c",&ch);

    if (ch == 'E')
        morning();

    else
        buendia();


    return 0;
}

void morning()
{
    printf("Good Morning");
}

void buendia()
{
    printf("buen día");
}