#include <stdio.h>
int main()
{
	
	float p,money,p1;
	printf("请输入你的个人所得");
	scanf("%f",&money);
	p=money-5000;
	if (p<=0)									p1=0;
	else if (p<3000)							p1=0.03*p;						
	else if (p<12000)							p1=0.1*p-210;
	else if (p<25000)							p1=0.2*p-1410;
	else if (p<35000)							p1=0.25*p-2660;
	else if (p<55000)							p1=0.3*p-4410;
	else if (p<80000)							p1=0.35*p-7160;
	else										p1=0.45*p-15160;
	
	
	printf("月应纳税额p为%.2f",p1);
	return 0;

 }
