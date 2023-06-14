#include <stdio.h>
int main()
 {
    int mark;
    
    printf("Enter the mark : ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100) {
        printf("Grade A\n");
    } else if (mark >= 75 && mark <= 89) {
        printf("Grade B\n");
    } else if (mark >= 60 && mark <= 74) {
        printf("Grade C\n");
    } else if (mark >= 50 && mark <= 59) {
        printf("Grade D\n");
    } else if (mark >= 0 && mark <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid mark!\n");
    }
    return 0;
}
