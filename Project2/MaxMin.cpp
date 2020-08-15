#include<stdio.h>
int main()
{
	int a, b, c, total;
	scanf_s("%d%d%d", &a, &b, &c);
	total = a + b + c;

	if (total >= 80)
	{
		printf("A");
	}
	else if (total >= 75)
	{
		printf("B+");
	}
	else if (total >= 70)
	{
		printf("B");
	}
	else if (total >= 65)
	{
		printf("C+");
	}
	else if (total >= 60)
	{
		printf("C");
	}
	else if (total >= 55)
	{
		printf("D+");
	}
	else if (total >= 50)
	{
		printf("D");
	}
	else if (total >= 0)
	{
		printf("F");
	}
}