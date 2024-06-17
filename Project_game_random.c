#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main () 
{
    int user;
    srand(time(0));
    int num = ((rand())%100)+1;
    int cnt = 0;
    printf("Enter your guess between 0 to 100\n");
    do
    {
    scanf("%d",&user);
    if (user < num)
        printf("enter a greater number \n");
    else if (user > num)
        printf("enter a lower number \n");
    else
        printf("Bingo ! you got it \n");
    cnt++;
    }while (user != num);
    printf("No of guesses : %d \n",cnt);
    return 0; 
}
