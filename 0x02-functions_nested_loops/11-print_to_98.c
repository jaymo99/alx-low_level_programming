#include "main.h"

/**
 * print_to_98 - prints all numbers from @n to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		print_numbers_ascending(n, 98);
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			if (n < 10)
			{
				_putchar(n + '0');
			}
			else
			{
				print_all_digits(n);
			}

			/* add comma and space if the list is yet to reach 98 */
			if (n > 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}

}

/**
 * print_all_digits - prints all the digits in a given integer
 * @i: The integer whose digits will be printed
 *
 * Return: void
 */
void print_all_digits(int i)
{
	if (i / 10)
	print_all_digits(i / 10);

	/* Print the last digit */
	_putchar(i % 10 + '0');
}


/**
 * print_numbers_ascending - prints integers in ascending order
 * @starting: indicates where to start when printing
 * @stopping: indicates where to stop when printing
 *
 * Return: void
 */
void print_numbers_ascending(int starting, int stopping)
{
    /**
     * int m: used for output in place of n
     * Very helpful when dealing with negative numbers
    */
    int n = starting;
    int m;

    for (n = n; n <= stopping; n++)
    {
    /* negative numbers */
        if (n < -1)
        {
            m = n * -2;
            _putchar('-');
            print_all_digits(m);
        }
        else
        {
            print_all_digits(n);
        }

        /* add comma and space if the list is yet to reach 97 */
        if (n < stopping)
        {
            _putchar(',');
            _putchar(' ');
        }
        else
            _putchar('\n');
    }

}

