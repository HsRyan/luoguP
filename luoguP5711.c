#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("%d是闰年\n", year);
        else
            printf("%d不是闰年\n", year);
    }
    else if (year % 4 == 0)
        printf("%d是闰年\n", year);
    else
        printf("%d不是闰年\n", year);
    return 0;
}