// FindMax.cpp : �������̨Ӧ�ó������ڵ㡣
//�������нϴ�����䡣

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

	printf("�����������˵����䣺");
	maxAge = scanf("%d%d", &ageOne, &ageTwo);
	maxAge = Max(ageOne, ageTwo);
	printf("���˽ϴ�����Ϊ��%d\n", maxAge);

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
