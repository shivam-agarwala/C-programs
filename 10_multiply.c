#include <stdio.h>
int main()
{
    printf("Enter number in file whose you want multiplication table\n");
    printf("Next line Enter how many times you wanna multiply it\n");
    FILE *ptr;
    ptr = fopen("multiply.txt","r");
    int num,times;
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&times);
    fclose(ptr);
    ptr = fopen("multiply.txt","w");
    for(int i =1; i<=times ; i++)
    {
        fprintf(ptr,"%d times %d is equal to %d \n",i,num,num*i);
    }
    fclose(ptr);
}