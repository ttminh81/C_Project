#include <stdio.h>
#include <stdlib.h>
#define MAXELEMENTS  1000

int main ()
{
    int n;
    int a;
    float *elements;
    
    printf ("Enter the number of element:");
    scanf ("%d",&n);
    elements = (float *)calloc(n, sizeof(float));   //allocate memory for n element
    
    if (elements == NULL)
    {
        printf ("Allocation fail");
        return 0; 
    }

    for (int i =0; i< n; i++)
    {
        printf ("Enter value to a[%d]:", i);
        scanf ("%f", elements +i);
    }

    for (int i =0; i< n; i++)
    {
        if (*elements < *(elements+i))
        {
            *elements = *(elements+i);
        }
    }
    
    printf ("Highest value: %f", *elements);
}

