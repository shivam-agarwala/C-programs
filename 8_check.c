#include <stdio.h>
#include <string.h>

int main()
{
    char st[50] ;
    printf("Enter the string \n");
    scanf("%s",st);
    char c;
    fflush(stdin);
    printf("Enter character to check \n");
    scanf("%c",&c);
    int flag=0;
    for(int i = 0 ; i < 50 ;i++)
    {
        if(st[i] == '\0')
        break;
        if(c == st[i])
        {
        flag = 1;
        break;
        }
    }
    if(flag == 1)
    printf("Yes, present \n");
    else
    printf("No, not present \n");
}