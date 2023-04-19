#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	int arr[] = { 9,1,5,7,2,10,8,4,6,3 };

	for (int i = 0; i < 10 - 1; i++)
	{
		for (int j = 0; j < 10 - 1 - i; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
				
			}


		}


	}
	
	for (int k = 0; k < 10; k++) {

		printf("%d\n", arr[k]);

	}
	
	
	return 0;
}
