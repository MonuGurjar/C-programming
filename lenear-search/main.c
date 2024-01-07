#include <stdio.h>

int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    int ar[n];
    
    for(int i=0;i<n;i++)
    {
    printf("enter %dst number \n",i+1);
    scanf("%d",&ar[i]);
    }
    for (int i=0;i<n;i++)
    {
        if (ar[i]==x)
        {
            printf("%d is available at %d location",x,i);
        }
    }
    printf("Hello World");

    return 0;
}
