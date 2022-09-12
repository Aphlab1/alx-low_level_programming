#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
<<<<<<< HEAD
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
=======
{       
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(e));
>>>>>>> 1400e682bf9e9598ba28c76434db760ab5e59a5c
	return (0);
}

       	

