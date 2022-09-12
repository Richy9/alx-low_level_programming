#include <stdio.h>

/**
 * Description: main - entry print size of types to stdout
 *
 * Return: 0 (if successful)
 */
int main (void)
{
int i;
char c;
float f;
long long int lli;
long int li;

printf("The size of a char: %lu\n", (unsigned long)sizeof(c)); printf("byte(s)"); 
printf("The size of an int: %lu\n", (unsigned long)sizeof(i)); printf("byte(s)");
printf("The size of a long int: %lu\n", (unsigned long)sizeof(li)); printf("byte(s)"); 
printf("The size of a long long int: %lu\n", (unsigned long)sizeof(lli)); printf("byte(s)");
printf("The size of a float: %lu\n", (unsigned long)sizeof(f)); printf("byte(s)");

	return(0);
}
