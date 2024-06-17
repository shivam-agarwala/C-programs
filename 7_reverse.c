#include <stdio.h>

void rev(int arr2[5])
{
    int *ptr = arr2;
    for(int i = 0 ; i<2 ; i++)//if we take i<5 then it will reverse the reverse
    {
        int t = *(ptr+i);
        *(ptr+i) = *(ptr+4-i);
       *(ptr+4-i) = t;
    }
    printf("Reverse is \n");
    for(int j =0 ; j<5 ; j++)
    {
    printf("%d\n",*(ptr+j));
    }
}

int main () 
{
    int arr[5];
    int i ;
    printf("Enter 5 values \n");
    for(i=0 ; i<5 ;i++)
    {
        scanf("%d",&arr[i]);
    }
    rev(arr);
    return 0; 
}