//pattern generator

#include <stdio.h>
void Num(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}
void Spaces(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf(" ");
    }
}
void GenPat(int n) {
    int i, j, k, x, y;
    
    for (i = n, x = 0; i >= 1; i--, x += 2) {
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }
        for (y = 1; y <= x; y++) {
            printf(" ");
        }
        for (k = i; k >= 1; k--) {
            printf("%d", k);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    GenPat(n);
    return 0;
}