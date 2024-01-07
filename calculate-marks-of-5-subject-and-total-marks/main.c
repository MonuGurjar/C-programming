// program to calculate percentage of 5 subject and total marks

#include <stdio.h>

int main()
{
    int math,phy,chem,comp,eng,per,total;
    printf("Use space to enter marks of each subject");
    printf("\nEnter marks of Physics,Maths,Chemistry,English,Computer : ");
    scanf("%d%d%d%d%d",&phy,&math,&chem,&eng,&comp);
    // printf("\nEnter marks of Maths :");
    // scanf("%d",&math);
    // printf("\nEnter marks of Chemistry :");
    // scanf("%d",&chem);
    // printf("\nEnter marks of English :");
    // scanf("%d",&eng);
    // printf("\nEnter marks of Computer :");
    // scanf("%d",&comp);
    
    // Maximum marks are 100 in each subject we can simply divide all by total number of subjects
    
    per=math+phy+chem+comp+eng;
    total=per;
    per=per/5;
    printf("Total marks obtained by student %d out of 500\n",total);
    printf("Percentage of Student is %d",per);

    return 0;
}
