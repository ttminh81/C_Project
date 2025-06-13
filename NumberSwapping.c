#include <stdio.h>


void swap (int *x, int *y)
{
    int tmp; 
    tmp = *x;                       //Temporary give value to tmp
    *x = *y;                        //Swap value of y to x
    *y = tmp;                       //y get value  from tmp
}

int main () 
{
    int a,b;    
    printf ("Input a:");
    scanf ("%d", &a);

    printf ("Input b:");
    scanf ("%d", &b);             

    printf ("Init value: a = %d, b = %d \n",a,b);
    swap(&a, &b);                           //address given to function
    printf ("Swapping value: a = %d, b = %d \n",a,b);
    

}