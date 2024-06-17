#include <stdio.h>
int main ()
{
    char name[10];
    int salary;
    char name2[10];
    int salary2;
    printf("Enter name\n");
    scanf("%s",name);
    printf("Enter Salary\n");
    scanf("%d",&salary);
    printf("Enter name 2\n");
    fflush(stdin);
    scanf("%s",name2);
    printf("Enter salary 2\n");
    scanf("%d",&salary2);
    FILE *ptr;
    ptr = fopen ("pahal.txt","w");
    int i=0;
    while(name[i] != '\0')
    {
    fputc(name[i],ptr);
    i++;
    }
    fprintf(ptr,"  %d \n",salary);
    int j=0;
    while(name2[j] != '\0')
    {
    fputc(name2[j],ptr);
    j++;
    }
    fprintf(ptr,"  %d \n",salary2);
    fclose(ptr);
}