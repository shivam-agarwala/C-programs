#include <stdio.h>
char grades (int grade)
{
    if (grade<=100 && grade>=91)
    {
        return 'O';
    }
    else if (grade<=90 && grade>=81)
    {
        return 'E';
    }
    else if (grade<=80 && grade>=71)
    {
        return 'A';
    }
    else if (grade<=70 && grade>=0)
    {
        printf("launda chutiya hai tumhara");
        return 'P';
    }
    else 
    {
        printf("tum khud chutiye ho inpu 0-100 me do behenchod");
        return 'c';
    }
}
int main ()
{
    int marks ;
    printf ("ENTER MARKS");
    scanf ("%d",&marks);
    printf ("  GRADE IS : %c \n",grades(marks));
    return 0;
}