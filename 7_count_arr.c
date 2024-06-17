#include <stdio.h>
int main () 
{
    int n ;
    printf("Enter size of data\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the data\n");
    for(int i = 0 ; i<n ; i++)
    {
    scanf("%d",&arr[i]);
    }
    int cnt = 0;
    for(int j = 0 ; j<n ; j++)
    {
    if(arr[j] > 0)
    {
    cnt++;
    }
    }
    printf("No of positive integers are %d \n",cnt);
    return 0; 
}