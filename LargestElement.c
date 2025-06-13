#include <stdio.h>
#define MAXELEMENTS  1000

int main ()
{
    int numE;
    int a;
    int arr[] = {0};
    float value[MAXELEMENTS];
    printf ("Enter the number of element:");
    scanf ("%d",&numE);
    for(int i=0; i < numE; i++)
    {
        printf("Number %d", i);
        scanf("%d", &a);
    }
}

