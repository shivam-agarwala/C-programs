#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = (int*)malloc(6*sizeof(int));
    for(int i=0 ;i<4;i++)
    {
        printf("Enter %d value \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<6;i++)
    {
        printf("Value at %d is %d \n",i,ptr[i]);
    }
}