#include <stdio.h>
#include <string.h>

struct employee {
    int code;
    float salary;
    char name[50];
};

void show (struct employee e)
{
    printf("Name is %s \n",e.name);
    printf("salary is %f \n",e.salary);
    printf("code is %d \n",e.code);
}


int main ()
{
    struct employee e1;
    printf("Name is \n");
    scanf("%s",e1.name);
    printf("salary is \n");
    scanf("%f",&e1.salary);
    printf("code is \n");
    scanf("%d",&e1.code);
    show(e1);
}
    