#include <stdio.h>

struct TimeStruct
{
    int hour;
    int minute;
    int second;
};


int main(int argc, char const *argv[])
{
    struct TimeStruct time1, time2, displayTime;
    printf("Please input the hour 1");
    scanf ("%d %d %d", &time1.hour,&time1.minute, &time1.second);
    printf("Please input the hour 2");
    scanf ("%d %d %d", &time2.hour,&time2.minute, &time2.second);

    displayTime.second = (time1.second+time2.second);
    displayTime.minute = (time1.minute + time2.minute) + displayTime.second/60;
    displayTime.hour = (time1.hour + time2.hour) + displayTime.minute/60;

    displayTime.second %= 60;
    displayTime.minute %= 60;
    printf ("\n Result display: %02d:%02d:%02d\n", displayTime.hour, displayTime.minute, displayTime.second);




    return 0;
}
