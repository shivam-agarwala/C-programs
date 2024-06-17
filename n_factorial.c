#include <stdio.h>

int factorial(int r)
{
    int fact = 1;
   for(int i =r;i>0;i--)
   {
    fact = fact*i;
   }
return fact;
}
int main()
{
    int f;
   scanf ("%d",&f);
   printf("%d\n",factorial(f));
    return 0;
}