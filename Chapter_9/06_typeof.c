#include <stdio.h>
#include <string.h>

    typedef struct employee
{
    int code;
    float salary;
    char name[15];
} Emp;

int main(){
    // typedef int vicky;
    // vicky a = 66;
    // printf("The value is %d \n",a);

   // typedef struct employee Emp; // one more way for Emp
    Emp e1;
    Emp *ptr = &e1;
    e1.code = 25;
    e1.salary = 6900;
    strcpy(e1.name , "Abhishek");
    printf("%d %0.1f %s \n",e1.code,e1.salary,e1.name );
    printf("%d %0.1f %s \n",ptr->code,ptr->salary,ptr->name );
    return 0;
}