#include <stdio.h>
int main()
{
    int m,t,s;
    int r;
    scanf("%d %d %d",&m,&t,&s);
    if(s%t==0)
        r=s/t;
    else
        r=s/t+1;
    m-=r;
    printf("%d\n",m);
    return 0;
}
