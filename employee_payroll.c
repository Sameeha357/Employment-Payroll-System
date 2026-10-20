
#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float basicSalary;
    float hra;
    float da;
    float totalSalary;
};

int main() {
    struct Employee e[5];
    int i;

    printf("EMPLOYEE PAYROLL MANAGEMENT SYSTEM\n");

    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Employee name (one word): ");
        scanf("%29s", e[i].name);

        printf("Basic salary: ");
        scanf("%f", &e[i].basicSalary);

        e[i].hra = e[i].basicSalary * 0.20;
        e[i].da = e[i].basicSalary * 0.10;

        e[i].totalSalary =
            e[i].basicSalary + e[i].hra + e[i].da;
    }

    printf("\n--- EMPLOYEE SALARY DETAILS ---\n");

    for (i = 0; i < 5; i++) {
        printf("\nEmployee ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Basic Salary: Rs. %.2f\n", e[i].basicSalary);
        printf("HRA: Rs. %.2f\n", e[i].hra);
        printf("DA: Rs. %.2f\n", e[i].da);
        printf("Total Salary: Rs. %.2f\n",
               e[i].totalSalary);
    }

    return 0;
}
