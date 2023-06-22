//Write a function to initialize all members in the above array of structures

#include <stdio.h>
#include <string.h>

typedef struct {
    int rollNo;
    char name[20];
    int mark;
} Student;

void initStudent(Student *ptr, int no, char *nptr, int mark) {
    ptr->rollNo = no;
    ptr->mark = mark;
    strcpy(ptr->name, nptr);
}

void initArray(Student *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &(arr[i].rollNo));

        printf("Name: ");
        scanf("%s", arr[i].name);

        printf("Mark: ");
        scanf("%d", &(arr[i].mark));

        printf("\n");
    }
}

//void displayArray(const Student *arr, int size) {

int main() {
    int size = 3;
    Student arr[size];
    initArray(arr, size);
    //displayArray(arr, size);
     printf("Displaying array:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", arr[i].rollNo);
        printf("Name: %s\n", arr[i].name);
        printf("Mark: %d\n", arr[i].mark);
        printf("\n");
    }
    return 0;
}
