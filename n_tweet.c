#include <stdio.h>

typedef struct
{
    char name[50];
    char txt[140];
    char timestamp[40];
    int num_rt;
    int num_quote;
    int likes;
}tweet_t;

tweet_t liked (tweet_t *tw1 , tweet_t *tw2)
{
    if (tw1->likes > tw2->likes)
    return *tw1;
    else
    return *tw2;
}

int main () 
{
    tweet_t t1 = {"vala","jordaar","a",2,3,50};
    tweet_t t2 = {"pandey","chutiya hu mai","c",2,3,55};
    printf("Most liked tweet is %s \n" , (liked(&t1 , &t2)).txt);
    return 0; 
}