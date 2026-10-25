#include <stdio.h>

/* Student structure declaration */
struct Student {
    char name[50];    /* student name */
    int rollNo;       /* roll number */
    char stream[30];  /* stream, like IT, CSE */
    float marks;      /* marks */
};

int main() {
    struct Student s;  /* a Student variable named s */

    /* Taking Input */
    printf("Enter Student Name : ");
    if (scanf(" %49[^\n]", s.name) != 1) {
        printf("Invalid name.\n");
        return 1;
    }

    printf("Roll number : ");
    if (scanf("%d", &s.rollNo) != 1) {
        printf("Invalid roll number.\n");
        return 1;
    }

    printf("Stream : ");
    if (scanf(" %29[^\n]", s.stream) != 1) {
        printf("Invalid stream.\n");
        return 1;
    }

    printf("Marks : ");
    if (scanf("%f", &s.marks) != 1) {
        printf("Invalid marks.\n");
        return 1;
    }

    /* Output */
    printf("\n----- Student Details -----\n");
    printf("Name    : %s\n", s.name);
    printf("Roll No : %d\n", s.rollNo);
    printf("Stream  : %s\n", s.stream);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}