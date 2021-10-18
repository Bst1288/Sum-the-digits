#include<stdio.h>

int main() {
	int num;
	
	printf("Enter number : ");
	scanf_s("%d", &num);
	printf("%d", num);

	while (num > 9) 
	{
		printf(" -> ");

		int sum = 0;
		while (num > 0)
		{
			sum = sum + (num % 10);
			num = num / 10;
		}
		num = sum;
		printf("%d", num);
	}

	return 0;
}