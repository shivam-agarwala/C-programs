#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int play (char comp , char you)
{
    if (you == comp)
    return 0;
    else if (you=='p' && comp=='s')
    return 1;
    else if (you=='s' && comp=='r')
    return 1;
    else if (you=='r' && comp=='p')
    return 1;
    else
    return -1;
}

int main ()
{
    char you;
    printf("Enter s for stone , p for paper and r for scissors \n");
    scanf("%c",&you);
    char comp;
    srand(time(0));
    int num = ((rand())%100)+1;
    //random
    if (num <34)
    comp = 's';
    else if (num<67 && num>33)
    comp = 'p';
    else 
    comp = 'r';
    int result = play (comp , you);
    printf("The computer has chosen %c and you have chosen %c \n",comp,you);
    if(result == 0)
    printf("Game draw\n");
    else if(result == 1)
    printf("You won\n");
    else
    printf("Computer won\n");
}