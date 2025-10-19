#include <stdio.h>
int main()
{
	int born=0;
	printf("请输入你的出生年份");
	scanf("%d",&born);
	int age = 2025-born;
	printf("你今年%d岁",age);
	return 0;
}
