#include <stdio.h>

int main( void )
{
	int age = 36;
	int old, weight;

	weight = 180;
	old = 2 * age;

	printf("You weigh %d pounds.\n", weight);
	printf("You are %d years old.\n", age);
	printf("Someone twice your age would be %d years old.\n", old);
}
