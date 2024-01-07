#include <stdio.h>

int main()
{
    int A[3][3],B[3][3],C[3][3],i,j;
    printf("Enter 1st the Array Elements = \n ");
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
        {
            scanf("%d",&A[i][j]);
        }
    
    
    printf("Enter 2nd Array Elements = \n ");
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
        {
        scanf("%d",&B[i][j]);
        }
    
    
    for(i=0;i<3;++i)
        for (j=0;j<3;++j)
        {
            C[i][j]=A[i][j]+B[i][j];
        }
    for(i=0; i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",C[i][j]);
    }
    printf("\n\n");
    }
}


    
