#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("vicky2.txt", "r");
    
    if (ptr == NULL)
    {
        printf("The file does not exist.");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The first num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("The first num is %d \n", num);
    }
    return 0;
}