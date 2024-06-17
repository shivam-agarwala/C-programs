#include <stdio.h>


    void sumav ( int *a , int *b , int *sum , float *avg)
    {
      *sum = *a + *b ;
      *avg = ((*a) + (*b))/2.0 ; //or (float)*sum/2;
    }


int main () 
{
    int x = 3 ; 
    int y = 4 ;
    int sum ;
    float avg ;
    sumav(&x,&y,&sum,&avg);
    printf(" Sum of numbers is %d \n" ,sum);
    printf(" Avg of both numbers is %f \n" ,avg);
    return 0; 
}