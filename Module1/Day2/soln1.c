//Write a program to print exponent part of double variable in hexadecimal and binary format

#include <stdio.h>
int main() 
{
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long expn = (*ptr >> 52) & 0x7FF;
    printf("Original Number: %lf\n", x);
    printf("Hexadecimal format: 0x%llX\n", expn);
    printf("Binary format: ");
    for (int i = 10; i >= 0; i--) 
    {
        printf("%lld", (expn >> i) & 1);
    }
    printf("\n");
    return 0;
}