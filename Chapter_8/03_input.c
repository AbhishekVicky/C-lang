#include <stdio.h>

int main(){
    char st [4];
    printf("Enter a word:");
    scanf("%s",&st);// No length limit specified , because of bufferflow..
    scanf("%3s", st);  // Limits input to 3 characters (+1 for \0)
    printf("%s",st);
    return 0;
}