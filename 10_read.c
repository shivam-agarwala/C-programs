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
    int num3;
    fscanf(ptr,"%d",&num3);
    printf("%d\n",num);
    printf("%d\n",num3);
    char ch1 = fgetc(ptr);
    printf("%c\n",ch1);
    char ch2 = fgetc(ptr);
    if(ch2 == EOF)
    {
    printf("end of file\n");
    }
    int num2 = 33;
    FILE *rptr;
    rptr = fopen("pahal.txt","w");
    fprintf(rptr,"%d\n",num2);
    fputc('c',rptr);
    fclose(ptr);
    fclose(rptr);
    }
}