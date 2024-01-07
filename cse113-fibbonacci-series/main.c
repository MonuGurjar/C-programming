#include <stdio.h>

int main()
{
    int a=0, b=1, next=0, n;
    printf("Enter the number term = ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a=b;
        b=next;
        next=a;
        next=a+b;
        printf("%d\t",next);
    }

    return 0;
}

