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
		printf("��ͨ����\n");
		break;
	case 6:
		printf("��\n");
		break;
	default:
		printf("û�н�");
	}




}