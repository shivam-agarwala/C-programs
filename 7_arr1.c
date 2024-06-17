#include <stdio.h>
int main () 
{
    int arr[10] ;
    printf("enter 10 numbers\n");
    for(int i=0 ; i<10 ; i++)
    {
        scanf("%d",&arr[i]);//scanf mein \n nh chalta h 
    }
    int *ptr ;
    ptr = &arr[0];
    //can also write ptr = arr;
    int *ptr2;
    ptr2 = ptr + 2 ;
    printf("The value of ptr2 is %d\n",*ptr2);
    return 0; 
}