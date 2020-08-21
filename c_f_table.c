#include <stdio.h>

#define	MIN	-32
#define MAX	100
#define STEP	2

/* 
 * Formula: 0C * (9/5) + 32 = 32F 
*/

/* Print Celsius - Fahrenheit Table */
int main(void)
{

	int celsius;
	int max_width = 5;

	printf("\nTemperature Look Up Table\n");
	printf("%3s %3s\n", "_C_", "_F_");
	for (celsius = MIN; celsius <= MAX; celsius += STEP)
		printf("%3d", celsius);
		printf("%5.1f\n", max_width, (celsius * (9.0/5.0) + 32));
}
