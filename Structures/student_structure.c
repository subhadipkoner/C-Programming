#include <stdio.h>

/* Student structure declaration */
struct Student {
    char name[50];    /* student-er naam */
    int rollNo;       /* roll number */
    char stream[30];  /* stream, jemon IT, CSE */
    float marks;      /* marks */
};

int main() {
    struct Student s;  /* s naam-e ekta Student variable */

    /* Input nawa */
    printf("Student-er naam likho: ");
    scanf(" %49[^\n]", s.name);

    printf("Roll number likho: ");
    scanf("%d", &s.rollNo);

    printf("Stream likho: ");
    scanf(" %29[^\n]", s.stream);

    printf("Marks likho: ");
    scanf("%f", &s.marks);

    /* Output dekhano */
    printf("\n----- Student Details -----\n");
    printf("Name    : %s\n", s.name);
    printf("Roll No : %d\n", s.rollNo);
    printf("Stream  : %s\n", s.stream);
    printf("Marks   : %.2f\n", s.marks);

    return 0;
}