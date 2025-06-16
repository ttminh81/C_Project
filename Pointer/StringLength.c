#include <stdio.h>
#define MAXLENGTH 5000

int main () 
{
    char string[MAXLENGTH];
    char ptr;
    printf ("Please input a string: ");
    scanf ("%s", string);
    printf ("\n");
    printf ("Lenght of string %s is: %d", string, getLength(string));
}

int getLength(char *str)
{
    int cnt = 0; 
    while (*str != '\0' ){
        cnt++;
        str++;
    }
    return cnt;
}