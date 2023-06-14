#include <stdio.h>

int main() {
    int rollNo, physicsMarks, mathMarks, chemistryMarks;
    char name[50];

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Physics Marks: ");
    scanf("%d", &physicsMarks);

    printf("Enter Math Marks: ");
    scanf("%d", &mathMarks);

    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistryMarks);
    
    int totalMarks = physicsMarks + mathMarks + chemistryMarks;
    float percentage = (float)totalMarks / 3;

    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemistryMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}
