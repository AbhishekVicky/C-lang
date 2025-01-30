#include <stdio.h>
 // Ek najar dekh lo isko bhi
int strlen(char str[])
{
    int i = 0, count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[] = "Vicky";

    printf("%d \n", strlen(str));

    return 0;
}