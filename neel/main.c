/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a[10],n,i,j;
   printf("Enter the number of elements= ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       printf("Enter the %dst element= ", i);
       scanf("%d",&a[i]);
   }
   for (i=0;i<=n-1;i++)
    for (j=0;j<n-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
            int temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
         
     }
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
     return 0;
}