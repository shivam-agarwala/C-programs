#include <stdio.h>
int sum (int length)
{
    int n = length;
    int arr[n];
    printf("Enter all the elements of array :\n");
    for(int i =0 ; i<n ; ++i)
    {
    scanf("%d" , &arr[i]);
    }
    int s = 0;
    for(int i =0 ; i<n ; i++)
    {
        s = s + arr[i];
    }
    return s;
}
int main()
{
    printf("Enter the number of elements in array : \n");
    int l =0;
    scanf("%d",&l);
    printf("The sum of all elements of the array : %d \n",sum(l));
}
