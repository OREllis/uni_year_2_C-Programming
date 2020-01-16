#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 12

int main() {
	int x, y, z;
	char *buf = malloc(sizeof(char) * BUFSIZE);

	printf("Area Calculator:\nEnter the room Width: ");
	fgets(buf, BUFSIZE, stdin);
	x = atoi(buf);

	printf("\nEnter the room Length: ");
	fgets(buf, BUFSIZE, stdin);
	y = atoi(buf);

	printf("\nEnter the room height: ");
	fgets(buf, BUFSIZE, stdin);
	z = atoi(buf);

	printf("\n\nThe room area is %0.2f\n", ((float) x * y * z ));
}
