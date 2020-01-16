#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 12

int main() {
	int vals[3] = { 0, 0, 0 };
	char *buf = malloc(sizeof(char) * BUFSIZE);

	printf("Area Calculator:\nEnter the room Width: ");
	fgets(buf, BUFSIZE, stdin);
	vals[0] = atoi(buf);

	printf("\nEnter the room Length: ");
	fgets(buf, BUFSIZE, stdin);
	vals[1] = atoi(buf);

	printf("\nEnter the room height: ");
	fgets(buf, BUFSIZE, stdin);
	vals[2] = atoi(buf);

	printf("\n\nThe room area is %0.2f\n", ((float)  vals[0] * vals[1] * vals[2]));
}
