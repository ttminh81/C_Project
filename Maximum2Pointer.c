#include <stdio.h>

int main ()
{
    int a,b;
    
    printf ("Input a:");
    scanf ("%d", &a);

    printf ("Input b:");
    scanf ("%d", &b);
    
    printf ("The maximum number is: %d", Max(&a, &b));
}

int Max(int *n, int *m)
{   
    int max; 
    max = (*n < *m)?*m:*n; 

    return max; 

}