#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(void)
{	
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};	
	for (int i = 0; i < SIZE/2; i++)
	{
		int temp = arr[i];
		arr[i] = arr[SIZE - i - 1];
		arr[SIZE - i - 1] = temp;		
	}	
	for (int k = 0; k < SIZE; k++)	
	{

		printf("%d", arr[k]);
		

	}

	
	
	return 0;
}
