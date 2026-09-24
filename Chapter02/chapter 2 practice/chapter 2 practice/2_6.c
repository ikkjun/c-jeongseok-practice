#include <stdio.h>

#define EMAIL "ask@codechobo.com"

int main(void) {
	char ch = 65;
	char email[] = "ask@codechobo.com";

	int i = 0xFF;
	long long ll = 12345678901234LL;

	unsigned ui = 0xFFFFffff;
	unsigned long long ull = 0xFFFFffffFFFFffffLL;

	printf("ch='%c', %d\n", ch, ch);
	printf("i=%d, %x, %X, %#X, %o, %#o\n", i, i, i, i, i, i);
	printf("ll=%lld\n", ll);

	printf("ui=%u, %x, %d\n", ui, ui, ui);
	printf("ull=%llu, %#llx, %11d\n", ull, ull, ull);

	printf("\n""Hello, world\"\n");
	printf("ask me, EMAIL please.\n");
	printf("ask me, " EMAIL " please.\n");
	printf("ask me, %s please. \n", email);

	printf("[12345678901234567890]\n");
	printf("[%s]\n", email);
	printf("[%20s]\n", email);
	printf("[%-20s]\n", email);
	printf("[%.8s]\n", email);

	return 0;
}