#include <stdio.h>

int main()
{
    int a;
    a=1;
    
    while (a<=100)
    {
        if (a%3==0 && a%5==0)
        {
            printf("FizzBuzz\t");
            
        }
        
        else if (a%5==0)
        {
            printf("Fizz\t");
        }
        
        else if (a%3==0)
        {
            printf("Buzz\t");
            
        }
        
        else 
        {
            printf("%d\t", a);
        }
        
        
        a=a+1;
    }
    
    
      return 0;
}
