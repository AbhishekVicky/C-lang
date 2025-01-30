#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1;
    strcpy(e1.name ,"Vicky");
    e1.code = 183;
    e1.salary = 25.34;

    printf("%d %f %s \n",e1.code,e1.salary,e1.name );
    
    return 0;
}