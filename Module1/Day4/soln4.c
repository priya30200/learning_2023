//Diff between even & odd elements

#include <stdio.h>
void main() 
{
    int n,diff,sumeven=0,sumodd=0;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
         sumeven = sumeven + arr[i];
            printf("%d \n", arr[i]);
          
    }
    printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
         sumodd = sumodd + arr[i];
            printf("%d \n", arr[i]);
           
    }
    diff = sumeven - sumodd;
    printf("Sum of even numbers: %d\n", sumeven);
    printf("Sum of odd numbers: %d\n", sumodd);
    printf("Difference: %d\n", diff);
}