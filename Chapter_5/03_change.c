#include <stdio.h>

    int change(int a);
    
    int change(int a){
        a = 77;
        return 0;
    }


int main(){
    int b = 22;3
    change(b);
    printf("%d\n",b);
    return 0;
}