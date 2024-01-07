// Write a Program in c to sort the element of array in ascending order by using selection sort.

#include <stdio.h>

int main()
{
    int a[10],n,i,j;
    printf("Enter the number of elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the %dst element = ", i);
        scanf("%d",&a[i]);
    }
    for (i=0;i<=n-1;i++)
    {
        int max = i;
    
            if(a[max]<a[i+1])
            {
                max=i+1;
            }
            int temp=a[max];
            a[max]=a[n-1];
            a[n-1]=temp;
            n=n-1;
    }
        
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    
    return 0;
    
    
}




