#include <stdio.h>
#include <string.h>

struct vectors {
    float x;
    float y;
};

struct vectors sumvector (struct vectors v3 , struct vectors v4)
{
    struct vectors result;
    result.x = v3.x + v4.x ;
    result.y = v3.y + v4.y ;
    //printf("Value of x is %f and value of y is %f\n",(v3.x + v4.x),(v4.y+v3.y));
    return result;
}

int main ()
{
    struct vectors v1, v2;
    v1.x = 10;
    v1.y = 20;
    v2.x = 20;
    v2.y = 10;
    struct vectors sum = sumvector(v1 , v2);
    printf("x is %f and y is %f \n",sum.x , sum.y);
}