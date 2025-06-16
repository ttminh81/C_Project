#include <stdio.h>

int main() {
    char s[1000] = "28tech python";
    char t[1000] = "28tech java";
    char c[1000] = "28tech ";
    printf("%d\n", strcmp(s, t)); // p > j
    if(strcmp(s, c) == 0){
        printf("Hai xau ky tu giong nhau !\n");
    }
    return 0;
}

//string copy
int strcpy (char *s, char *t) 
{
    
    while ((*s++ = *t++)!= '\0');
}
//string compare, 
int strcmp(char *s, char *t){
    for (;*s == *t; s++, t++){
        if (*s =='\0');                   //return to 0
        {
            return 0;
        }
    }
    return *s - *t;
}