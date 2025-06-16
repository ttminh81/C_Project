#include <stdio.h>

main()
{
    int i;
    long long fact; 
    printf ("Input number: ");
    scanf ("%d", &i);
    factorial(i, &fact);
    printf("Factorial number of %d is: %d", i, fact);
}

void factorial(int n, int* f)
{
    *f = 1;
    for (int i = 1; i <= n; i++){
        *f = (*f)*i;
    }
    
}
