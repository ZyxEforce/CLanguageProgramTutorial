// Sum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	//声明
	int variableOne;
	int variableTwo;
	int variableThree;
	int sum = 0;

	//初始化
	variableOne = 123;
	variableTwo = 456;
	variableThree = -64;

	sum = variableOne + variableTwo + variableThree;

	printf("三个数的和为:%d\n", sum);

	return 0;
}

