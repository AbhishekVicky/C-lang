#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter details of first user(e1) code salary name:");
    scanf("%d %f %s", &e1.code, &e1.salary, &e1.name);
    printf("details are : %d %f %s\n", e1.code, e1.salary, e1.name);

    printf("Enter details of first user(e2) code salary name:");
    scanf("%d %f %s", &e2.code, &e2.salary, &e2.name);
    printf("details are : %d %f %s\n", e2.code, e2.salary, e2.name);

    printf("Enter details of first user(e3) code salary name:");
    scanf("%d %f %s", &e3.code, &e3.salary, &e3.name);
    printf("details are : %d %f %s\n", e3.code, e3.salary, e3.name);

    return 0;
}