#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "zebra";
    char c  = 'z';
    int contains = 0;
    for (int i = 0; i < strlen(str); i++)
    {
       if (str[i]== c)
       {
        contains = 1;
        break;
       }
        
    }
    if (contains == 1)
    {
        printf("Yes it contains \n");
        
    }
    else{
        printf("Does not contains \n");
        
    }
    
    
    return 0;
}