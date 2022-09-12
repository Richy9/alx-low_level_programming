#include <stdio.h>

/**
 * Description: main - entry print size of types to stdout
 *
 * Return: 0 (if successful)
 */
int main(void)
{
int i;
char c;
float f;
long long int lli;
long int li;

printf("Size of a char: %lu %s\n", (unsigned long)sizeof(c), "byte(s)"); 
printf("Size of an int: %lu %s\n", (unsigned long)sizeof(i), "byte(s)");
printf("Size of a long int: %lu %s\n", (unsigned long)sizeof(li), "byte(s)"); 
printf("Size of a long long int: %lu %s\n", (unsigned long)sizeof(lli), "byte(s)");
printf("Size of a float: %lu %s\n", (unsigned long)sizeof(f), "byte(s)");

	return (0);
}
