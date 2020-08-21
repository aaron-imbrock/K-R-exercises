#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>

int isPrime(int n);

int main(int argc, char** argv)
{
    char* p;
    int i, arg_int;
    long arg;
    errno = 0;  /* defined by errno.h */
    
    /*
     * This error handling code and converting argv to int should be
     * moved out of main() and into their own functions. ...or a header file.
     * Modified from https://stackoverflow.com/questions/9748393/how-can-i-get-argv-as-int/
     */
    arg = strtol(argv[1], &p, 10);

    if (*p != '\0' || errno != 0 || argc < 1) /* Require a number or error out */
    {
        printf("Usage: primes [MAX_NUM]\nTry 'primes 42' as an example.\n");
        return 1;
    }

    if (arg < INT_MIN || arg > INT_MAX) 
    {
        printf("Integer value out of range for this architecture.\n");
        return 1;
    }
    else
    {
        arg_int = arg;
    }
    for (i = 2; i < arg_int; i++)
        if( isPrime(i) )
        {
         printf("%d is prime\n", i);
        }
    return 0;
}

 /*
 * TODO: Numbers larger than the sqrt() don't need to be checked.
 * TODO: Even numbers don't need to be checked, two is the only even prime number.
 * TODO: Track time to complete
 * TODO: Implement counter to track numbers  
 * TODO: New isPrime function where the sqrt() is determined once.
 */

/* This function chooses the bruteforce method; it checks each and every number. */
int isPrime(int n) {
    int i;

    for(i = 2; i < n; i++)
        if(n%i == 0)
            return 0; /* False */

    return 1;	/* True */
}

int isPrime2(int n) {
    int i;

    for(i = 2; i <= sqrt(n); i++)
        if(n%i == 0)
            return 0; /* False */

    return 1;	/* True */
}
