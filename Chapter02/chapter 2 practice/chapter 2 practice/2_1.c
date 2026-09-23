#include <stdio.h>

int main(void)
{
	int age = 14;
	int year = 0;

	printf("year:%d\n", year);
	year = age + 2000;

	printf("age:%d\n", age);
	printf("year:%d\n", year);

	age = age + 1;
	printf("age: %d\n year %d\n", age, year);

	return 0;
}