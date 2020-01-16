#include <stdio.h>
#include <stdlib.h>

int main() {
	char *buff = (char*)malloc(2); 

	printf("Enter a number:\n");
	scanf("%2c", buff);

	printf("\nReversed: ");

	putchar(*(buff+1));
	putchar(*buff);

	putchar('\n');
	free(buff);

	return 0;
}
