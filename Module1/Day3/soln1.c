//print bits

#include <stdio.h>
void printBits(unsigned int num) 
{
    int numBits = sizeof(num) * 8;
    for (int i = numBits - 1; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
        if (i % 8 == 0) {
            printf(" ");
        }
    }
    printf("\n");
}
int main() {
    unsigned int num;
    printf("Enter a 32-bit integer: ");
    scanf("%u", &num);
    printf("Bits: ");
    printBits(num);
    return 0;
}
