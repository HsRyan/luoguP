#include <stdio.h>
int squ(int x,int y)
{
    int r=1,j;
    for(j=0;j<y;j++)
    {
        r*=x;
    }
    return r;
}
int main()
{
    double a;
    double b=1.00;
    int res=0;
    int i;
    double result=0;
    scanf("%lf",&a);
    b=a*10;
    for(i=0;i<4;i++)
    {
        int c=0,d=0;
        c=(int)b%10;
        b/=10;
        d=squ(10,3-i);
        res+=(d*c);
    }
    result=res/1000.000;
    printf("%.3lf\n",result);
    return 0;
}
