#include <stdio.h>

int main ()
{
    int a = 0, b = 0;
    printf ("Enter the first number: ");
    scanf ("%d", &a);

    printf ("Enter the first number: ");
    scanf ("%d", &b);
    
    printf ("The sum of %d and %d is: %d", a, b, sum(&a,&b) );

}

int sum(int *n, int *m)
{
    int sum; 
    sum= *n +*m;
    return sum;
    
}