#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int Soda = 1;
	int money = 20;
	int Empty_bottle = 0;
	int count = 0;
	int sum = money / Soda;
	Empty_bottle = money / Soda;
	for (Empty_bottle ; Empty_bottle > 1; Empty_bottle = count)
	{
		count = Empty_bottle / 2;
		sum = sum + count;
	}
	printf("可有汽水瓶数 = %d\n", sum);
	return 0;
}

#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个数字");
	scanf("%d %d", &num1, num2);
	sum = num1 + num2;
	printf("sum=%d\n", sum);
	return 0;
}
#include <stdio.h>
int get_max(int x, int y)
{
	int z;
	z = (x > y) ? x : y;
	return z;
}
int main()
{
	int num1 = 10;
	int num2 = 20;
	//要求：完成get_max函数
	int max = get_max(num1, num2);
	printf("max = %d\n", max);
	return 0;
}

#include <stdio.h>
int Add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	printf("输入两个数字");
	scanf("%d %d", &num1, num2);
	sum = Add(num1, num2);
	printf("sum=%d\n", sum);
	return 0;
}

#include <stdio.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("%d", i);
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("请输入三个数字");
	scanf("%d %d %d", &num1, &num2, &num3);
	if (num1 > num2 && num2 > num3)
	{
		printf("%d %d %d", num1, num2, num3);
	}
	else if (num1>num3 && num3>num2)
	{
		printf("%d %d %d", &num1, num3, num2);
	}
	else if (num2 > num1 && num1 > num3)
	{
		printf("%d %d %d", num2, num1, num3);
	}
	else if (num2 > num3 && num3 > num1)
	{
		printf("%d %d %d", num2, num3, num1);
	}
	else if (num3 > num1 && num1 > num2)
	{
		printf("%d %d %d", num3, num1, num2);
	}

	else
	{
		printf("%d %d %d", num3, num2, num1);
	}
	return 0;
}
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	printf("请输入三个数字");
	scanf("%d %d %d", &num1, &num2, &num3);
	switch (num)
	{
		case 1;
			printf("%d\n")
	}
}
#include <stdio.h>
int main()
{

	int x = 3;
	int y = 3;
	switch (x % 2) {  //x=1
	case 1:
		switch (y)
		{
		case 0:
			printf("first ");
		case 1:
			printf("second ");//x=second
			break;
		default: printf("hello ");//y=hello
		}
	case 2:
		printf(" third");
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int func(int);
	{
		int a = 1;
		int b;
		switch (a)
		{
		case 1: b = 30;
		case 2: b = 20;
		case 3: b = 16;
		default: b = 0;
		}
		printf("%d", b);
		return b;
	}
}
#include<stdio.h>
int main()
{
	int i = 100;
	int a = 1;
	while (i >= 100 && i <= 200)
	{
		for (a = 1; a < i; a++)
		{
			if (i%a == 0)
			{
				break;
			}
			else
			{
				printf("%d\n", i);
			}
		}
		i++;
	}
	return 0;
}
