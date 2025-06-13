#include <stdio.h>




struct poinr
{
    int x;
    int y;
    char c;
};

int main ()
{

    struct poinr p;
    p.x = 1000;
    p.y =100;
    p.c = 'b';

    printf("Struc value contain: %d, %c, %d ", p.x, p.c, p.c);

}