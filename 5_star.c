#include <stdio.h>

void star (int a)
{
    for(int i=1 ; i<=2*a-1 ; i++)
    {
        printf("*");
    }
}
void pattern (int b)
{
    for (int j=1 ; j<=b ; j++)
    {
        star(j);
        printf("\n");
    }
}
int main () 
{
    int n ;
    printf("Enter number of lines\n");
    scanf("%d",&n);
    pattern(n);
    return 0; 
}