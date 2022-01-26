
#include <stdio.h>

int main()
{
    int s=100;
    int v=99;
    int min = 0;
    int hour = 0;
    int truehour = 7;
    int truemin = 60;
    if (s % v == 0)
        min = s / v;
    else
        min = s / v + 1;
    hour = (min+10) / 60;
    if (hour > 7)
        printf("%d:%d", 24 + truehour - hour, truemin - (min + 10) % 60);
    else
        printf("%d:%d",  truehour - hour, truemin - (min + 10) % 60);

    
}   

