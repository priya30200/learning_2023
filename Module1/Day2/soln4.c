//Write a program to find total number of bits set in a given array

#include <stdio.h>
int BitsSets(unsigned int num) 
{
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int main() {
    unsigned int a[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totSBits= 0;

    for (int i = 0; i < size; i++) {
        totSBits += BitsSets(*(a + i));
    }
    printf("Total number of set bits: %d\n", totSBits);
    return 0;
}
