#include <stdio.h>
#include <string.h>
int main()
{
    char st[50];
    printf("Enter a string \n");
    scanf("%s",st);
    char cpy[50];
    for(int i = 0; i<50 ; i++)
    {
        cpy[i] = st[i];
    }
    printf("Copied string is %s \n",cpy);
}