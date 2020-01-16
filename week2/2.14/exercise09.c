#include <stdio.h>

#define ARRSIZE 5

int main() {
	char arr[ARRSIZE] = { '0', '1', '2', '3', '4' };

	for(int i = 0; i <= ARRSIZE; i++)
		printf("%s\n", arr[i]);

	putchar('\n');
	return 0;
}
