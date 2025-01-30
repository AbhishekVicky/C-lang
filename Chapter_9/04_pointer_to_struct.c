#include <stdio.h>

    struct employee
{
    int code;
    float salary;
    char name[15];
};

int main(){
    struct employee e1;
    e1.code = 69;
    struct employee *ptr;
    ptr = &e1;
   // printf("%d",(*ptr).code);// Here, it'll print structure elements
   printf("%d\n",ptr->code);//As same (*ptr).code
   
   printf("%p", &(ptr->code));  //For address

    return 0;
}