#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{

	int student[5][3];  //5名学生的3门成绩
	for (int j = 0; j < 5; j++)
	{
		printf("请输入第%d名学生的三门成绩，且在[0,100]区间内", j + 1);
		for (int i = 0; i < 3; i++)
		{
			int temp = j;

			scanf("%d", &student[j][i]);

			if (student[j][i] >= 0 && student[j][i] <= 100);
			else
			{
				printf("输入错误");
				j = temp - 1;

			}

		}
	}
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%d\t", student[j][i]);
		}
		printf("\n");
	}

	return 0;
}
