///Write a function to display all members in the above array of structures

#include <stdio.h>
#include <string.h>
struct Student
{
    int rollNo;
    char name[20];
    int marks;
};
typedef struct Student Student;
void displayEmployee(Student *);
void displayArray(Student *, int);
void initArray(Student*, int);
int main()
{
    int size = 3;
    Student arr[size]; 
    printf("sacnning..\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i].rollNo);
        scanf("%s",&arr[i].name);
        scanf("%f",&arr[i].marks);
    }
    displayArray(arr, size);
    return 0;
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
    int marks;
    printf("Scanning\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &no);
        scanf("%s", n);
        scanf("%d", &marks);
    }
}
