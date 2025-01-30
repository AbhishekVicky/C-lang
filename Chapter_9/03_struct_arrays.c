#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[15];
};

int main()
{
    struct employee facebook[100]; // This is used to store multiple user data...
    facebook[0].code = 0;
    facebook[0].salary = 10;
    strcpy(facebook[0].name, "Zero");

    facebook[1].code = 1;
    facebook[1].salary = 111;
    strcpy(facebook[1].name, "One");

    printf("About facebook users are :\n");
    printf("user[0] code is %d , salary is %f and name is %s\n", facebook[0].code, facebook[0].salary, facebook[0].name);
    printf("user[1] code is %d , salary is %f and name is %s\n", facebook[1].code, facebook[1].salary, facebook[1].name);

    //One more way to store in struct
    struct employee try= {4,5.00,"vicky"};
    printf("%d %f %s",try.code,try.salary,try.name);    
    return 0;
}