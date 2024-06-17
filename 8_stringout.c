#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50] ;
    printf("Enter a string\n");
    gets(st1);
    char st3[50];
    printf("Enter String 2\n");
    scanf("%s",st3);
    fflush(stdin);
    char st2[10];
    printf("Enter String 3\n");
    //char c;
    scanf("%c", &st2[0]);
    int i = 1;
    while(st2[i-1]!= '\n')
    {
       scanf("%c", &st2[i]);
       //st2[i] = c;
       i++;
    }
    st2[i-1] = '\0';
    printf("Value of first string is %s \n",st1);
    printf("Value of second string is %s \n",st3);
    printf("Value of third string is %s \n",st2);
    printf("Comparing last two Strings %d \n",strcmp(st2,st3));
    return 0;
}