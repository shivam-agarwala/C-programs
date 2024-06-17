#include <stdio.h>
#include <string.h>

int slice (int a, int b , char *st2)
{
    char new[50];
    int cnt=0;
    for(int i = a ; i <= b ; i++)
    {
      new[cnt] = st2[i];
      cnt++;
    }
    printf("Sliced string is %s \n",new);
    return 0;
}

int main ()
{
    char st[50] ;
    printf("Enter the string\n");
    scanf("%s",st);
    int m ;
    int n ;
    //fflush(stdin);
    printf("Enter the start position \n");
    scanf("%d",&m);
    fflush(stdin);
    printf("Enter the end position \n");
    scanf("%d",&n);
    slice(m,n,st);
}

