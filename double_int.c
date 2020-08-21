#include <stdio.h>

int main(void) {
	double d;
	int num = 9, den = 4;

	d = num / den;
	printf("%f\n\n", d);

	d = (double)num/den;
	printf("%f\n", d);
}
