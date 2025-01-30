#include <stdio.h>

int main(){

    int n1,n2,n3;
    printf("Enter three numbers :");
    scanf("%d %d %d", &n1 , &n2 , &n3);
    
    int arr[3][10];
    int mul [] = { n1 , n2, n3};
    for (int i = 0; i < 3; i++)
    {
        for (int J = 0; J < 10 ; J++)
        {
            arr[i][J] = mul[i] * (J+1);
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        for (int J = 0; J < 10 ; J++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][J]);
        }
        printf("\n");
    }
    
    return 0;
}