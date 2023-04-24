# -
新人学习用的
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
![image](https://user-images.githubusercontent.com/131525338/234043237-040a00ef-20d4-4ec1-ad41-bec70dc9739e.png)
