#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Nbj!dsjdlfu!lifmof!kb!sib!iv";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] -1;
    }
    printf("%s",str);
    
    return 0;
}