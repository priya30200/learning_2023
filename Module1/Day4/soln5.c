//Diff b/w even & odd indexed element

#include <stdio.h>
int main() {
    int array[100],n;
    printf("enter n:");
    scanf("%d",&n);
    int evenSum = 0;
    int oddSum = 0;
    printf("enter array elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even-indexed element
            evenSum += array[i];
        } else {
            // Odd-indexed element
            oddSum += array[i];
        }
    }
    int difference = evenSum - oddSum;
    printf("Sum of even indexed elements: %d\n", evenSum);
    printf("Sum of odd indexed elements: %d\n", oddSum);
    printf("Difference: %d\n", difference);
    return 0;
}
