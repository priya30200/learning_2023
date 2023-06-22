//Write a function to perform a search operation on the array of structures based on name of the student

#include <stdio.h>
#include <string.h>
struct Student {
    int rno;
    char name[50];
    float mark;
};
typedef Student Student;
void searchByName(Student students[], int count, const char *name) {
    int i;
    int found = 0;

    for (i = 0; i < count; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rno);
            printf("Name: %s\n", students[i].name);
            printf("Marks obtained : %s\n\n", students[i].mark);
            found = 1;
        }
    }

    if (!found) {
        printf("No student found with the name '%s'.\n\n", name);
    }
}

int main() {
    int size = 3;
    Student students[size]; 
    students[0].rno = 1;
    strcpy(students[0].name, "Priya");
    students[0].mark = 98;

    students[0].rno = 2;
    strcpy(students[0].name, "Keerthi");
    students[0].mark = 56;
    
    students[0].rno = 3;
    strcpy(students[0].name, "Jaya");
    students[0].mark = 67;
    char searchName[50];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    searchByName(students, 3, searchName);
    return 0;
}

