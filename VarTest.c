#include <stdio.h>

int main ()
{
    int x=1, y=2, z[10]; 
    int *ip;         //ip is a pointer to int
    ip = &x; //ip point to x
    printf("Address of x: %d \n", ip);
    y = *ip;         //Value of y is now 1
    printf("Value of y: %d\n", y);
    *ip = 0;         //Value of x is now 0
    printf("Value of x: %d\n", x);
}