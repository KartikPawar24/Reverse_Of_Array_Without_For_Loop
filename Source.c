#include<stdio.h>
#include<conio.h>

void main()
{
	int i, arr[6], low = 0, high = 6 - 1, temp;
	
	printf("Enter the array values:\n");
	for (i = 0; i < 6; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	while (low <= high)
	{
		temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}

	printf("Array elements are:\n");
	for (i = 0; i < 6; i++)
	{
		printf("%d\t", arr[i]);
	}
	_getch();
}