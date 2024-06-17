#include <stdio.h>

int main ()
{
    FILE *ptr;
    ptr = fopen("pahal.txt","r");
    if(ptr == NULL)
    {
    printf("The file is empty\n");
    }
    else
    {
    int num;
    fscanf(ptr,"%d",&num);
    FILE *rptr;
    rptr = fopen("pahal.txt","w");
    fprintf(rptr,"%d\n",num*2);
    fclose(ptr);
    fclose(rptr);
    }
}