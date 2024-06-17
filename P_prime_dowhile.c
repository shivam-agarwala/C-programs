#include <stdio.h>
int main () 
{
    int a ;
    printf("Enter number\n");
    scanf("%d",&a);
    int n = 2;
    do
    {
        if(a%n == 0)
        {
            if (a==n)
            {
            printf("The number is not prime\n");
            break;
            }
        printf("The number is prime\n");
        break;
        }
        else
        {
        n++;
        continue;
        }
    }while (n<=a);
    return 0; 
}