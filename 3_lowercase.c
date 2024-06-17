#include <stdio.h>
int main ()
{
    char c ;
    printf("Enter a letter\n");
    scanf("%c",&c);
    if((97<=c) && (c<=122))
    printf("lowercase\n");
    else if((65<=c) && (c<=91))
    printf("uppercase\n");
    else
    printf("Not a letter\n");
    return 0;
}