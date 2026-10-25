#include <stdio.h>

/* Employee structure declaration */
struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

int main() {
    struct Employee emp[100];  /* maximum 100 employees */
    int n, i;

    printf("How many employees? ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100) {
        printf("Invalid number (1-100 allowed).\n");
        return 1;
    }

    /* Taking Input */
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("ID: ");
        if (scanf("%d", &emp[i].id) != 1) {
            printf("Invalid ID.\n");
            return 1;
        }

        printf("Name: ");
        scanf(" %49[^\n]", emp[i].name);

        printf("Department: ");
        scanf(" %29[^\n]", emp[i].dept);

        printf("Salary: ");
        if (scanf("%f", &emp[i].salary) != 1) {
            printf("Invalid salary.\n");
            return 1;
        }
    }

    /* Output */
    printf("\n----- Employee List -----\n");
    printf("%-5s %-20s %-15s %10s\n", "ID", "Name", "Dept", "Salary");

    for (i = 0; i < n; i++) {
        printf("%-5d %-20.20s %-15.15s %10.2f\n",
               emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
    }

    return 0;
}