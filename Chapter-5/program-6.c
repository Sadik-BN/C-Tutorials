#include<stdio.h>

void printHW(int counter);

int main()
{

    printHW(5);

    return 0;
    
}

//Recursive Function
void printHW(int counter)
{
    if (counter == 0)
        {
            return;
        }

    printf("Hello World\n");
    counter = counter-1 ; 

    printHW(counter);    

}