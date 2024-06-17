#include <stdio.h>

int address (int a)
{
    a = a*10;
    printf("Address of a is %u \n " , &a);
    return a;
}

int address2 (int *a)
{
    *a = (*a)*10;
    return *a;
}

int main () 
{
    int i = 5;
    int *j;
    j = &i;
    printf("Address of i is %u \n" ,j);
    printf("The value if i is %d \n" ,*j); 
    address(i);
    printf("value of i is now = %d \n" ,*j);
    address2(j);
    printf("value of i is now = %d \n" ,*j);
    return 0; 
}