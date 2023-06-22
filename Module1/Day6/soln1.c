
#include <stdio.h>
#include <string.h>
struct Student
{
    int rollNo;
    char name[20];
    int marks;
};
typedef struct Student Student;
void initEmployee(Student*, int, char *, float);
void displayEmployee(Student *);
void displayArray(Student *, int);
void initArray(Student*, int);
int main()
{
    int size = 3;
    Student arr[size]; 
    initArray(arr, size);
    displayArray(arr, size);
    return 0;
}
void initStudent(Student *ptr, int no, char *nptr, int mark)
{
    ptr->rollNo = no;
    ptr->marks = mark;
    strcpy(ptr->name, nptr);
}
void displayStudent(Student *ptr)
{
    printf("%d, %s, %d\n", ptr->rollNo, ptr->name, ptr->marks);
}
void displayArray(Student *ptr, int size)
{
    printf("Displaying\n");
    for (int i = 0; i < size; i++)
    {
        displayStudent(&ptr[i]);
    }
}
void initArray(Student *ptr, int size){
    int no;
    char n[20];
    int mark;
    printf("Scanning\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &no);
        scanf("%s", n);
        scanf("%d", &mark);
        initStudent(&ptr[i], no, n, mark);
    }
}