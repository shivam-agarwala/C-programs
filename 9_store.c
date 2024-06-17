#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct date {
    int day;
    char month[10];
    int year;
};

bool compare (struct date e1 , struct date e2 )
{
    if(e1.day == e2.day &&  strcmp(e1.month, e2.month) && e1.year == e2.year)
    return 1;
    else 
    return 0;
}

int main ()
{
    struct date d[5];
    for (int i =0 ; i<5 ; i++)
    {
    printf("Enter the day \n");
    scanf("%d",&d[i].day);
    printf("Enter the month \n");
    scanf("%s",d[i].month);
    printf("Enter the year \n");
    scanf("%d",&d[i].year);
    }
    printf("Comparing first two dates \n");
    if(compare (d[1],d[2]) == 1)
    printf("yes \n");
    else
    printf("No \n");
}