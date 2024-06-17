#include <stdio.h>
int main () 
{
    int arr[3][10];
    for(int i = 0 ; i<10 ; i++)
    {
        arr[0][i] = 2*(i+1);
        arr[1][i] = 7*(i+1);
        arr[2][i] = 9*(i+1);
    }
    for(int m = 0 ; m<3 ; m++)
    {
        for(int n = 0 ; n<10 ; n++)
        {
            printf("value is %d \n",arr[m][n]);
        }
    }
    return 0; 
}