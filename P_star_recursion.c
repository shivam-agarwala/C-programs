#include <stdio.h>

void star (int a)
{
    if(a==1)
    {
        printf("*");
    }
    else
    {
        printf("**");
        star(a-1);
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