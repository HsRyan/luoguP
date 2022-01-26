#include <stdio.h>

int XiaoA(int num)
{
	if (num % 2 == 0 && num > 4 && num <= 12)
		return 1;
	else
		return 0;
}

int Uim(int num)
{
	if (num > 4 && num <= 12)
		return 1;
	else if (num % 2 == 0)
		return 1;
	else
		return 0;		
}

int BaWeiYong(int num)
{
	if (num > 4 && num <= 12)
	{
		if (num % 2 != 0)
			return 1;
	}
	else if (num % 2 == 0)
	{
		return 1;
	}
	return 0;
}

int ZhengMei(int num)
{
	if (num > 4 && num <= 12)
		return 0;
	else if (num % 2 == 0)
		return 0;
	else
		return 1;
}





int main()
{
	int num=0;
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	scanf_s("%d", &num);
	a = XiaoA(num);
	b = Uim(num);
	c = BaWeiYong(num);
	d = ZhengMei(num);
	printf("%d %d %d %d\n", a, b, c, d);
	return 0;
}