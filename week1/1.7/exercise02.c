#include <stdio.h>

int main() {
	char name[21];	
	char colour[11];	
	char age[4];	

	printf("What is your Name? :\n");
	scanf("%20s", name);

	printf("\nWhat is your age? :\n");
	scanf("%3s", age);

	printf("\nWhat is your favourite colour? :\n");
	scanf("%10s", colour);

	printf("Your name is %s, you are %s years old, and your favourite colour is %s.\n", name, age, colour);

	return 0;
}
