// Find the largest number by deleting single digit in a 4 digit number

#include <stdio.h>
int Large(int num) {
    int largest = 0;
    int thousands = num / 1000;
    int hundreds = (num / 100) % 10;
    int tens = (num / 10) % 10;
    int units = num % 10;
    if ((thousands * 100 + hundreds * 10 + tens) > largest) {
        largest = thousands * 100 + hundreds * 10 + tens;
    }
    if ((thousands * 100 + hundreds * 10 + units) > largest) {
        largest = thousands * 100 + hundreds * 10 + units;
    }
    if ((thousands * 100 + tens * 10 + units) > largest) {
        largest = thousands * 100 + tens * 10 + units;
    }
    if ((hundreds * 100 + tens * 10 + units) > largest) {
        largest = hundreds * 100 + tens * 10 + units;
    }
    return largest;
}
int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999) {
        printf("Invalid input! Please enter a 4-digit number.\n");
        return 0;
    }
    int largestNumber = Large(num);
    printf("The largest number by deleting a single digit: %d\n", largestNumber);
    return 0;
}
