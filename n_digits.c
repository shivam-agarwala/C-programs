#include <stdio.h>
    int digits(int x)
    {
        int rem = x;
        int count = 0;
        if(x==0)
        return 1;
        while(rem>0)
        {
            rem = rem/10;
            count++;
        }
        return count;
    }
    int main ()
    {
        int z;
      scanf(" Enter the number : %d ",&z);
      printf("No of digits = %d \n", digits(z));
      return 0;
    }
