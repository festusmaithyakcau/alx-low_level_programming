/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number
 *
 * @n: input number
 *
 * Return: square root
*/

int _sqrt_recursion(int n)
{
	if (n == 1)		/*sqrt(1) == 1*/
		return (1);
	else if (n == 0)	/*sqrt(0) == 0*/
		return (0);
	else if (n < 0)		/*sqrt(-n) == -1 (NA)*/
		return (-1);
	else
		return (_sqrt_recursion_wrapper(n, 1, n));
}
