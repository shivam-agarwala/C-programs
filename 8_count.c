#include <stdio.h>
#include <string.h>

int main()
{
    char st[50] ;
    printf("Enter the string \n");
    scanf("%s",st);
    char c;
    fflush(stdin);
    printf("Enter character to count \n");
    scanf("%c",&c);
    int cnt=0;
    for(int i = 0 ; i < 50 ;i++)
    {
        if(st[i] == '\0')
        break;
        if(c == st[i])
        cnt++;
    }
    printf("Number of times is %d\n",cnt);
}