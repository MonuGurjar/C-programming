#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    int age;
    float salary;
};

void sortEmp(struct Employee arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].salary < arr[j + 1].salary) {
                // Swap the elements if they are in the wrong order
                struct Employee temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Employee employees[100];
    for (int i = 0; i < 100; i++) {
        printf("Enter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", employees[i].name);
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }
    sortEmployees(employees, 100);
    printf("\nTop five employees based on salary:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s\n", i + 1, employees[i].name);
    }

    return 0;
}