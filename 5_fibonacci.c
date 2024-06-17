#include<stdio.h>

int fibo(int n)
{
    int c;
    if (n==1)
    return 1;
    else if(n==2)
    return 1;
    else if(n>2)
    {
      c = fibo(n-1)+fibo(n-2);
      return c;
    }
    else
    {
        return 0;
    }
}
int main ()
{
   int f;
   scanf("%d",&f);
   printf("%d\n",fibo(f));
}