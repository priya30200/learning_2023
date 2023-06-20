

#include <stdio.h>

#define SIZE 10

typedef struct {
    int rollno;
    char name[20];
    float marks;
} Student;

void initStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = i + 1;
        printf(students[i].name, "Student %d", i + 1);
        students[i].marks = 0.0;
    }
}

int main() {
    Student students[SIZE];
    int numStudents;

    printf("Enter the number of students : %d ", SIZE);
    scanf("%d", &numStudents);

    if (numStudents > SIZE) {
        printf("Maximum number of students exceeded\n");
        return 1;
    }

    initStudents(students, numStudents);

    printf("Initialized students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d: ROLL NO =%d, Name=%s, Mark=%.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}
