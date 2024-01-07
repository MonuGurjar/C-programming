#include <stdio.h>

int main()
{
    int A[3][4],i,j,even=0,odd=0;
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
        if(A[i][j]%2==0)
        {
            even=even+A[i][j];
        }
        else
        {
            odd=odd+A[i][j];
        }
    }
    printf("%d\t",even);
    printf("\n%d",odd);
}
