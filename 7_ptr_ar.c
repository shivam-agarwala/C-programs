#include <stdio.h>
int main () 
{
    int i = 32 ;
    int *ptr;
    ptr = &i;
    printf("The value of ptr is %u \n",ptr);
    ptr = ptr+2;
    *ptr = 34;
    printf("The value of ptr is %u \n",ptr);
    int j = 33;
    int *ptr2 ;
    ptr2 = ptr+5;
    *ptr2 = 26;
    printf("The value of ptr2 is %u \n",ptr2);
    printf("value at ptr2 is %d \n",*ptr2);
    int sum = *ptr + *ptr2 ;
    printf("The value of sum is %d \n", sum);
    //addition of two pointers is not possible in c
    int diff;
    diff = ptr - ptr2 ;// Diff is the number of memory spaces between not bytes
    printf("Value of diff is %d \n",diff);
    int *ptr3;
    ptr3 = ptr2;
    int flag = 0;
    printf("value of ptr3 is %u \n",ptr3);
    if(ptr2 == ptr3)
    {
    flag = 1;
    }
    printf("flag is %d \n",flag);
    return 0; 
} 
//for character the memory will increase by 1 byte
//for float it is same as integer = 4 bytes
//double has size of 8 bytes
// longdouble has size of 16 bytes