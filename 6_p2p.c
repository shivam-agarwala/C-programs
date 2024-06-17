#include <stdio.h>

int main () 
{
    int i = 5;
    int *j;
    j = &i;
    int **k;
    k = &j;
    printf ("value of i is %d \n" ,**k);
    return 0; 
}