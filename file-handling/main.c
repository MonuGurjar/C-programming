#include<stdio.h>

struct monu {
    char empname[50];
    int id;
    float salary;
};

int main()
{
    int n;
    struct monu gurjar[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the detail of Employee no. : %d ",i+1);
        printf("Name : ");
        scanf("%s",gurjar[i].empname);
        printf("Employee ID : ");
        scanf("%d",&gurjar[i].id);
        printf("Salary : ");
        scanf("%f",&gurjar[i].salary);
        printf("\n");
    }
    
    
    File *file = fopen("employee.txt","w");
    if (file!=NULL)
    {
        for (int i=0;i<n;i++)
        {
            fprintf(file, "Employee %d\n",i+1);
            fprintf(file, "Name : %s\n",gurjar[i].empname);
            fprintf(file, "Employee ID : %d\n",gurjar[i].id);
            fprintf(file, "Salary : %f\n",gurjar[i].salary);
            fprintf(file, "\n");
        }
        fclose(file);
        printf("Employee data has written to employee.txt\n");
    }
    else {
        ("Error opening the file while writting \n");
    }
    return 0;
}