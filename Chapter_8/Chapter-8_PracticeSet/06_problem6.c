#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Mai cricket khelne ja rha hu";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] +1;
    }
    printf("%s",str);
    
    return 0;
}