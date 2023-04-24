#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int day = 0;
	int t = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("普通奖项\n");
		break;
	case 6:
		printf("大奖\n");
		break;
	default:
		printf("没中奖");
	}




}