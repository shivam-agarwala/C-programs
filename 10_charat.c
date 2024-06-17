#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("pahal1.txt","r");
    FILE *rptr;
    rptr = fopen("pahal2.txt","w");
    char c;
    while(c != EOF)
    {
        c = fgetc(ptr);
        if (c != EOF)
        fputc(c,rptr);
    }
    fclose(ptr);
    fclose(rptr);
}