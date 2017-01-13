// FindMax.cpp : 定义控制台应用程序的入口点。
//求两人中较大的年龄。

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int Max(int variableOne, int variableTwo);

	int ageOne;
	int ageTwo;
	int maxAge;

	ageOne = 0;
	ageTwo = 0;
	maxAge = 0;

	printf("请输入两个人的年龄：");
	maxAge = scanf("%d%d", &ageOne, &ageTwo);
	maxAge = Max(ageOne, ageTwo);
	printf("两人较大年龄为：%d\n", maxAge);

	return 0;
}

int Max(int variableOne, int variableTwo)
{
	int max = 0;

	if (variableOne > variableTwo)
	{
		max = variableOne;
	}
	else
	{
		max = variableTwo;
	}

	return max;
}
