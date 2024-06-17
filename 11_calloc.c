#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter size of array \n");
    scanf("%d",&n);
    int *ptr;
    ptr = (int*)calloc(n,sizeof(int));
    int arr[n];
    for(int i=0 ;i<n;i++)
    {
        arr[i] = ptr[i];
        printf("Enter %d value \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i =0;i<n;i++)
    {
        printf("Value at %d is %d \n",i,ptr[i]);
    }
}