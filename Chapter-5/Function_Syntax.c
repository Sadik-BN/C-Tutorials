#include <stdio.h>

    void f(); //function prototype

    void g() //fuction define
    {
        printf("World.");
    }

    int main()
    {
        f(); //fuction call
        g(); //funtion call

        return 0;
    }

    void f() //function define
    {
        printf("Hello ");
    }
    // function f is in trditional way and g is in another way