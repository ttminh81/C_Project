#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // Create a pointer to integer
    int *p;

    // Pointer to an array of 5 integers
    int(*ptr)[5];

    // Points to 0th element of the arr
    p = arr;

    // Points to the whole array arr
    ptr = &arr;
  
  	printf("p = %p\n", p);
  	printf("*ptr = %p\n\n", *ptr);
  
  	// incrementing both pointers
    p++;
    ptr++;
    printf("p = %p\n", *p);
  	printf("*ptr = %p", ptr);

    return 0;
}