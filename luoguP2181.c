#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n<3)
    {
        scanf("%d",&n);
    }
    if(n==3)
        printf("0");
    else if(n==4)
        printf("1");
    else
        printf("%d",n*(n-1)*(n-2)*(n-3)/24);
    return 0;
}
