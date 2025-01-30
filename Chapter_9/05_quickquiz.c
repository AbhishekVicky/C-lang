#include <stdio.h>
#include <string.h>

    struct employee
    {
        int code;
        float salary;
        char name[15];
    };
    
    void show(struct employee n); //Function prototype

    void show(struct employee n){
        printf("Code is %d\nSalary is %0.2f\nName is %s \n ", n.code,n.salary,n.name);
        
    }

int main(){
    struct employee e1;
    e1.code = 25;
    e1.salary = 6900;
    strcpy(e1.name , "Abhishek");
    show(e1);
    return 0;
}