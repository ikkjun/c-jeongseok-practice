#include <stdio.h>
#include <limits.h>

#define USHRT_MIN 0

int main(void) {
	printf("SHRT_MIN     :  %hd\n", SHRT_MIN);      // h는l의 반대이며, 절반(half)를 의미한다.
	printf("SHRT_MIN-1   :  %hd\n", SHRT_MIN - 1);
	printf("SHRT_MAX     :  %hd\n", SHRT_MAX);
	printf("SHRT_MAX+1   :  %hd\n", SHRT_MAX + 1);

	printf("USHRT_MIN    :  %hu\n", USHRT_MIN);
	printf("USHRT_MIN-1  :  %hu\n", USHRT_MIN - 1);
	printf("USHRT_MAX    :  %hu\n", USHRT_MAX);
	printf("USHRT_MAX+1  :  %hu\n", USHRT_MAX + 1);

	return 0;
}