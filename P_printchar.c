#include <stdio.h>

void number(int m)
{
 int n = m;
if(n>0)
{
  if(n==1)
  {
    printf("*\n");
  }
  if(n==2)
  {
    number(1);
    printf("**\n");
  }
  else if(n>2)
  {
    number(n-1);
    for(int i=0 ; i<n ; i++)
    {
    printf(("*"));
    }
    printf("\n");
  }
}
}
int main()
{
  int f;
  printf("Enter no of rows\n");
  scanf("%d",&f);
  number(f);
  return 0;
}