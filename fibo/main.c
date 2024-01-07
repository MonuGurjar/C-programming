#include <stdio.h>
int main()
{
    int fib(int n)
    {
        if (n==1)
        return 0;
        else if (n==2)
        return 1;
        else
        return (fib(n-1)+fib(n-2));
    }
    int x=fib(5);
    printf("%d",x);

    return 0;
}

