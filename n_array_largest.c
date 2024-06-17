#include <stdio.h>
int largest (int length , int arr2[])
{
    int n = length;
    int big = arr2[0];
    for(int i =0 ; i<n-1 ; i++)
    {
        if(arr2[i] < arr2[i+1])
        big = arr2[i+1];
    }
    return big;
}
int main()
{
    printf("Enter the number of elements in array : \n");
    int l =0;
    scanf("%d",&l);
    int arr[l];
    printf("Enter all the elements of array :\n");
    for(int i =0 ; i<l ; i++)
    {
    scanf("%d" , &arr[i]);
    }
    printf("The largest of all elements of the array : %d \n",largest(l,&arr[0]));
}
