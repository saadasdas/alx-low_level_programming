#include "main.h"

/**
 * is_prime_recursive - Helper function to check
 * if a number is prime recursively.
 * @n: Input number.
 * @divisor: Divisor for checking divisibility.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: Input number.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int divisor;

	if (n <= 1)
	{
		return (0);
	}

	divisor = n / 2;
	return (is_prime_recursive(n, divisor));
}
