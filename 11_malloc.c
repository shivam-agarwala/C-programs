#include <stdio.h>
#include <stdlib.h>
int main()
{
    float *ptr;
    ptr = (float*) malloc(5*sizeof(float));
    for(int i=0 ;i<4;i++)
    {
        printf("Enter %d value \n",i);
        scanf("%f",&ptr[i]);
    }
    for(int i =0;i<5;i++)
    {
        printf("Value of %d float is %f \n",i,ptr[i]);
    }
}