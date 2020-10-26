#include <stdio.h>
#include <limits.h>
void main()
{
	printf("Type\t\tMIN\tMAX\n");
	printf("signed char\t%d\t%d\n", SCHAR_MIN, SCHAR_MAX);
	printf("signed short\t%d\t%d\n", SHRT_MIN, SHRT_MAX);
	printf("signed int\t%d\t%d\n", INT_MIN, INT_MAX);
	printf("signed long\t%ld\t%ld\n", LONG_MIN, LONG_MAX);
	printf("unsigned char\t0\t%u\n", UCHAR_MAX);
	printf("unsigned short\t0\t%u\n", USHRT_MAX);
	printf("unsigned int\t0\t%u\n", UINT_MAX);
	printf("unsigned long\t0\t%lu\n", ULONG_MAX);
}
