#include <stdio.h>
int main () 
{
    int a ;
    printf("Enter number\n");
    scanf("%d",&a);
    int sum = 0;
    int n = a;
    do
    {
    sum = sum + n;
    n--;
    }while (n>0);
    printf("Sum is %d \n",sum);
    return 0; 
}