#include <stdio.h>
#include <string.h>

struct vectors {
    float x;
    float y;
};

/*void sumvector(struct vectors v3 , struct vectors v4)
{
    struct vectors *e1 , *e2 ;
    e1 = &v3;
    e2 = &v4;
    printf("Value of x is %f and value of y is %f\n",((e1->x) + (e2->x)),((e1->y) + (e2->y)));
    //return 0;
}*/

int main ()
{
    struct vectors *v1 ;
    struct vectors *v2 ;
    //struct vectors e1, e2;
    v1->x = 10;
    v1->y = 20;
    v2->x = 20;
    v2->y = 10;
    printf("Value of x is %f and value of y is %f\n",((v1->x) + (v2->x)),((v1->y) + (v2->y)));
    //sumvector(*v1 , *v2);
    return 0;
}