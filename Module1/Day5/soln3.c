//program to to calculate the difference between two time periods using a user-defined function

#include <stdio.h>
struct Time 
{
    int hours;
    int minutes;
    int seconds;
};
struct Time calTimeDiff(struct Time t1, struct Time t2) 
{
    struct Time diff;
    int totSecs1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totSecs2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    int diffSeconds = totSecs2 - totSecs1;
    if (diffSeconds < 0)
    diffSeconds = -diffSeconds;
    diff.hours = diffSeconds / 3600;
    diff.minutes = (diffSeconds % 3600) / 60;
    diff.seconds = (diffSeconds % 3600) % 60;
    return diff;
}
int main()
 {
    struct Time t1, t2, difference;
    printf("Enter the first time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hours, &t1.minutes, &t1.seconds);
    printf("Enter the second time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hours, &t2.minutes, &t2.seconds);
    difference = calTimeDiff(t1, t2);
    printf("Difference between the two time periods: %d:%d:%d\n",difference.hours, difference.minutes, difference.seconds);
    return 0;
}
