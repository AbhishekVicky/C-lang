#include <stdio.h>

int main()
{
    char st[] = {'a', 'b', 'c', 'd', '\n'}; // here '\n' is presented as null
    char st2[] = "xyz";                     // both are same , and here there is no need to use '\n' for null , it's already presented...
    for (int i = 0; i < 5; i++)
    {
        printf("The string is %c\n", st[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        printf("The string is %c\n", st2[j]);
    }

    return 0;
}