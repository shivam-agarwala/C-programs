#include<stdio.h>

int digits(int r)
{
    int cnt = 1;
    if (r>9)
    {
      cnt = 1+digits(r/10);
    }
    return cnt;
}
int main ()
{
    int f;
    scanf("enter value : %d",&f);
    printf("no of digits :%d\n",digits(f));
    return 0;
}