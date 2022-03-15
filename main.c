#include <stdio.h>
int squ(int x, int y)
{
    int r=1;
    for(int i=0;i<y;i++)
    {
        r*=x;
    }
    return r;
}
int main()
{
    int a,b,n=0,i;
    printf("输入一个n位数：\n");
    scanf("%d",&a);
    b=a;
    while(b!=0)
    {
        n++;
        b=b/10;
    }
    printf("%d是%d位数\n",a,n);

    for(int j=1;j<=n;j++)
    {
        int c=squ(10,(n-j));
        printf("%d\n",a/c);
        a=a%c;
    }
    return 0;
}
