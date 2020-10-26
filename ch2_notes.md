# Types, Operators, and Expressions

## Variable Names

Variable names are made up of letters and digits, the first character of a variable name must be a letter. Note that '_' counts as a letter but that starting a variable name with an "u" is reserved by tradition for library routines.

Traditional C practice is to use lower case for variable names, and CAPS for symbolic constants.

Keywords: if, else, int, float, etc. 

Choose variable names that are related to the purpose of the variable, and that are unliley to get mixed up typographically.
Short names for local variables, and longer names for external variables. Capitalize symbolic constants.

## Data Types and Sizes

C only has a few basic data types:

char	a single byte, capable of holding a single ASCII character. That is to say, text "abasdfasdf0 hellother!" as ascii code values between 0 and 255.
int	an integer, reflecting the natural size of ints on that system type.
	For example, on a 32-bit architecture an int will be 32 bits long.
float	single-precision floating point
double	double-precision floating point

And the following qualifiers:

short int sh; (16 bits)
long int counter; (32 bits)

and is equivalent to:

short sh; 
long counter;

Additional qualifiers are signed and unsigned:

unsigned	0 or positive (a magnitude)
signed		negative, 0, or positive

For example:
	unsigned char	0 to 255
	signed char	-128 to 127	
		
## Exercise 2-1

Write a program to determine the ranges of char, short, int, and long variables,
both signed and unsigned, by printing appropriate values from standard headers and by direct computation.	

[First Answer](https://raw.githubusercontent.com/aaron-imbrock/K-R-exercises/master/ex21-rangesoftypes.c)
#
