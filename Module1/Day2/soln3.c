//Write a program to sum every alternate elements of a given array starting for element 0

#include <stdio.h>
int main() 
{
    int a[5],i,n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for(i=0; i < n; i++) 
    {
    printf("Enter number: ");
    scanf("%d", &a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    int sum = 0;
    for (int i = 0; i < size; i += 2) 
    {
    sum += a[i];
    }
    printf("Sum of Alternate Elements: %d\n", sum);
    return 0;
}
