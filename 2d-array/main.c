#include <stdio.h>

int main()
{
    int A[3][4],i,j;
    printf("Enter the Array Elements =  ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nThe matrix is : \n");
    for(i=0; i<3;i++)
    {
        printf("\n");
        for(j=0;j<4;j++)
        printf("%d\t",A[i][j]);
    }
    printf("\n\n");
}
