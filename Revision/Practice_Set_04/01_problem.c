#include <stdio.h>

int main(){
    int input;
    printf("Enter number :");
    scanf("%d",&input);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n",input , i , input*i);
    }
    
    return 0;
}