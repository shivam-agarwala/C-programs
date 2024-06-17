#include <stdio.h>
int main () 
{
    int a ;
    printf("Enter number\n");
    scanf("%d",&a);
    int fact = 1;
    int n = a;
    while (n>0)
    {
        fact = fact*n;
        n--;
    }
    printf("Factorial is %d \n",fact);
    return 0; 
}