
#include <stdio.h>

int find_biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int find_biggest_ternary_operator(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n1, n2, result_if_else, result_ternary;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    result_if_else = find_biggest_if_else(n1, n2);
    result_ternary = find_biggest_ternary_operator(n1, n2);
    
    printf("Using if-else, the biggest number is: %d\n", result_if_else);
    printf("Using ternary operator, the biggest number is: %d\n", result_ternary);
    
    return 0;
}


