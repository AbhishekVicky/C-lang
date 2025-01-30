#include <stdio.h>

int main()
{
    int inp[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter 3X3 matrix[%d][%d] :",i,j);
            scanf("%d", &inp[i][j]);
        }
    }

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("Value of 3X3 matrix at [%d][%d] is %d \n",i,j,inp[i][j]);
    //     }
    // }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ",inp[i][j]);
        }
        printf("\n");
    }

    return 0;
}