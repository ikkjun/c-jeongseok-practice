#include <stdio.h>

int main(void) {
	int num;
	printf("정수를 입력해 주세요>");
	scanf_s("%d", &num);

	printf("입력하신 정수는 %d입니다.\n", num);

	return 0;
}