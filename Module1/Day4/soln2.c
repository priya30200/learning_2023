//minimum, maximum, and average of a 1D array

#include <stdio.h>
int main() {
    int arr[100];
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    int sum = 0;
    float average;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    average = (float)sum / n;
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", average);
    return 0;
}
