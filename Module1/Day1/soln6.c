#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    printf("Enter the third number: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
    {
        printf("Greatest Number is %d\n", n1);
    } 
    else if (n2 >= n1 && n2 >= n3) 
    {
        printf("Greatest Number is %d\n", n2);
    } 
    else 
    {
         printf("Greatest Number is %d\n", n3);
    }
    return 0;
}
