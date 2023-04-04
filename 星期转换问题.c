#include <stdio.h>
int main()
{
	int week;char week1;
	printf("请输入要转换的整数:\n");
	scanf("%d",&week);

	switch(week)
	{
		case 0:printf("转换成星期输出为星期日");break;
		case 1:printf("转换成星期输出为星期一");break;
		case 2:printf("转换成星期输出为星期二");break;
		case 3:printf("转换成星期输出为星期三");break;
		case 4:printf("转换成星期输出为星期四");break;
		case 5:printf("转换成星期输出为星期五");break;
		case 6:printf("转换成星期输出为星期六");break;
		default:printf("输入错误");break;
		
	
}
	
	
	return 0;
	
}
