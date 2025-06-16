#include <stdio.h>

int main ()
{
    int n; 
    int *p;


    printf ("Number of elements need to be sorted: ");
    scanf ("%d", &n);
     p = (int *)malloc(n*sizeof(int));

    for (int i =1; i < n; i++)
    {
        printf("Enter element number %d: ", i);
        scanf("%d", p+i);
    }

}

void numberSort(int *p)
{
     
}