#include <stdio.h>
#include <stdlib.h>
int main()
{
    //int n;
    //printf("Enter size of array \n");
    //scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(5 ,sizeof(int));
    int arr[10];
    for(int i=0 ;i<5;i++)
    {
        arr[i] = ptr[i];
        printf("Enter %d value \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<5;i++)
    {
        printf("Value at %d is %d \n",i,ptr[i]);
    }
    ptr = realloc(ptr,10);
    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0 ;i<10;i++)
    {
        printf("Enter %d value \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<10;i++)
    {
        printf("Value at %d is %d \n",i,ptr[i]);
    }
}