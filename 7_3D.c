#include <stdio.h>
int main () 
{
    int m , n ;
    printf("Enter rows \n");
    scanf("%d",&m);
    printf("Enter Columns \n");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements\n");
    for (int i = 0 ; i<m ; i++)
    {
        for(int j =0 ; j<n ; j++)
        {
            scanf("%d",&arr[m][n]);
        }
    }
    int *ptr = &arr[m][n];
    printf("All addresses are \n");
    for(int k=0 ; k<m*n ; k++)
    {
        printf("%u\n",(ptr+k));
    }
    return 0; 
}