#include <stdio.h>
#include <string.h>

int main()
{
    char st[50] ;
    printf("Enter the string \n");
    scanf("%s",st);
    char encrypt[50];
    for(int i = 0 ; i < 50 ;i++)
    {
        if(st[i] == '\0')
        break;
        encrypt[i] = st[i]+1 ;
    }
    printf("Encrypted string is %s\n",encrypt);
}