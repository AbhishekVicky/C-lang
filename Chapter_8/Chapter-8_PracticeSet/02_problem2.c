#include <stdio.h>

int main(){
     char str[6];
    //  printf("Enter a word:");
    //  scanf("%c",str);
    //  printf("%s",str);

    for (int i = 0; i < 5; i++)
    {
        scanf("%c",&str[i]);
        fflush(stdin); //This is used to not count enter as a word
    }
    str[5] = '\0'; //It's a add a null ;
    printf("%s",str);
    
    

    return 0;
}