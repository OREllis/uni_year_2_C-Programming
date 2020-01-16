#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	char a = CHAR_MAX;
	short b = SHRT_MAX;
	int c = INT_MAX;
	long d = LONG_MAX;
	float e = FLT_MAX;
	double f = DBL_MAX;
	int g[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	char h[5] = { "Hello" };

	printf("%c, %d, %d, %ld, %f, %lf, %d, %s\n", a, b, c, d, e, f, g[4], h);

	return 0;
}
