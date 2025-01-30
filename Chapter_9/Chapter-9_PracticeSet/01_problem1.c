#include <stdio.h>
    //This is 2D Vector.... 
    struct vector
    {
        int i;
        int j;
    };
    

int main(){
    
    struct vector v = {1,2};
    printf("The value of vector is %di and %dj \n",v.i,v.j);
    

    return 0;
}