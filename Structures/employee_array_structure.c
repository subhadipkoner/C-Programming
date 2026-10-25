#include <stdio.h>

/* Employee structure declaration */
struct Employee {
    int id;
    char name[50];
    char dept[30];
    float salary;
};

int main() {
    struct Employee emp[100];  /* maximum 100 jon employee */
    int n, i;

    printf("Koto jon employee? ");
    scanf("%d", &n);

    /* Input nawa */
    for (i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %49[^\n]", emp[i].name);

        printf("Department: ");
        scanf(" %29[^\n]", emp[i].dept);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    /* Output dekhano */
    printf("\n----- Employee List -----\n");
    printf("%-5s %-20s %-15s %10s\n", "ID", "Name", "Dept", "Salary");

    for (i = 0; i < n; i++) {
        printf("%-5d %-20s %-15s %10.2f\n",
               emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
    }

    return 0;
}