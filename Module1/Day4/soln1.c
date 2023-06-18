// sum & average of 1D array

#include <stdio.h>
int main() {
    int arr[100];
    int len;
    printf("Enter the number of elements: ");
    scanf("%d", &len);
    printf("Enter the elements:\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    float average;

    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    average = (float) sum / len;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}
