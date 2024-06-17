#include <stdio.h>
double mean (int length)
{
    int n = length;
    int arr[n];
    printf("Enter all the elements of array :\n");
    for(int i =0 ; i<n ; i++)
    {
    scanf("%d" , &arr[i]);
    }
    double s = 0;
    for(int i =0 ; i<n ; i++)
    {
        s = s + arr[i];
    }
    return s/(double)n;
}
int main()
{
    printf("Enter the number of elements in array : \n");
    int l =0;
    scanf("%d",&l);
    printf("The mean of all elements of the array : %lf \n",mean(l));
}
