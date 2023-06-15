 //Write a program to swap any type of data passed to an function

#include <stdio.h>
void swap(void *ptr1, void *ptr2, size_t size) {
    char temp;
    char *charPtr1 = (char *)ptr1;
    char *charPtr2 = (char *)ptr2;

    for (size_t i = 0; i < size; i++) {
        temp = charPtr1[i];
        charPtr1[i] = charPtr2[i];
        charPtr2[i] = temp;
    }
}
int main() {
    int n1,n2;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);
    swap(&n1, &n2, sizeof(int));
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);

    char c1='A',c2='R';
    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    float a,b;
    printf("Enter 2 numbers : ");
    scanf("%f %f",&a,&b);
    printf("Before swapping: a = %f, b = %f\n", a, b);
    swap(&a, &b, sizeof(float));
    printf("After swapping: a = %f, b = %f\n", a,b);
    return 0;
}
