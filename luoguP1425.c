#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(d>=b)
        printf("%d\t%d",c-a,d-b);
    else
        printf("%d\t%d",c-1-a,d+60-b);
    return 0;
}
