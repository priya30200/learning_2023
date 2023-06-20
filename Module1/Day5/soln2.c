
#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} ComplexNumber;

void readComplexNumber(ComplexNumber *number) {
    printf("Enter the real part: ");
    scanf("%f", &(number->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(number->imaginary));
}

void writeComplexNumber(const ComplexNumber *number) {
    printf("Complex number: %.2f + %.2fi\n", number->real, number->imaginary);
}

ComplexNumber addComplexNumbers(const ComplexNumber *number1, const ComplexNumber *number2) {
    ComplexNumber result;
    result.real = number1->real + number2->real;
    result.imaginary = number1->imaginary + number2->imaginary;
    return result;
}

ComplexNumber multiplyComplexNumbers(const ComplexNumber *number1, const ComplexNumber *number2) {
    ComplexNumber result;
    result.real = (number1->real * number2->real) - (number1->imaginary * number2->imaginary);
    result.imaginary = (number1->real * number2->imaginary) + (number1->imaginary * number2->real);
    return result;
}

int main() {
    ComplexNumber number1, number2, sum, product;

    printf("Enter the first complex number:\n");
    readComplexNumber(&number1);

    printf("Enter the second complex number:\n");
    readComplexNumber(&number2);

    printf("\n");

    printf("First complex number:\n");
    writeComplexNumber(&number1);

    printf("Second complex number:\n");
    writeComplexNumber(&number2);

    printf("\n");

    sum = addComplexNumbers(&number1, &number2);
    printf("Sum of the two complex numbers:\n");
    writeComplexNumber(&sum);

    product = multiplyComplexNumbers(&number1, &number2);
    printf("Product of the two complex numbers:\n");
    writeComplexNumber(&product);

    return 0;
}

