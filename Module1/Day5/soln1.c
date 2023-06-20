//program to find the volume and the total surface area of the box

#include <stdio.h>
struct Box 
{
    double length;
    double width;
    double height;
};
double calVol(struct Box* boxPtr)
{
    return boxPtr->length * boxPtr->width * boxPtr->height;
}
double calSurfaceArea(struct Box* boxPtr) 
{
    return 2 * (boxPtr->length * boxPtr->width +
                boxPtr->width * boxPtr->height +
                boxPtr->height * boxPtr->length);
}
int main() 
{
    struct Box myBox;
    struct Box* boxPtr = &myBox;
    printf("Enter the length of the box: ");
    scanf("%lf", &boxPtr->length);
    printf("Enter the width of the box: ");
    scanf("%lf", &boxPtr->width);
    printf("Enter the height of the box: ");
    scanf("%lf", &boxPtr->height);
    double volume = calVol(boxPtr);
    printf("Volume: %.2f\n", volume);
    double surfaceArea = calSurfaceArea(boxPtr);
    printf("Surface Area: %.2f\n", surfaceArea);
    return 0;
}
