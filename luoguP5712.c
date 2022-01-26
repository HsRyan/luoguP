#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a > 1)
        printf("Today,I ate %d apples.\n", a);
    else
        printf("Today,I ate %d apple.\n", a);
    return 0;
}