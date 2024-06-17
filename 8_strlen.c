#include<stdio.h>
#include<string.h>
int main()
{
    char st[50];
    printf("Enter the string\n");
    scanf("%s",st);
    printf("The length of the string is %ld \n",strlen(st));
    int i ;
    int cnt =0;
    for(i=0;i<50;i++)
    {
        if (st[i] != '\0')
        {
        cnt++;
        }
        else
        {
        break;
        }
    }
    printf("The length of the string is %d \n" ,cnt);
}