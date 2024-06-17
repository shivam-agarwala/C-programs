#include<stdio.h>

int factorial (int y)
{
int fact = y;
  if (y == 1)
  {
    return 1;
  }
  else if (y > 1)
  {
     fact = fact*factorial(y-1);
     return fact;
  }
  else
  {
printf("invalid input");
return 0;
  }
}
  int main ()
  {
    int f;
     scanf("%d",&f);
     printf ("%d\n",factorial(f));
     return 0;
  }
