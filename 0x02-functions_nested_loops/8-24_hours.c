#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: Always 0
 */
int jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			if (hour < 10)
			{
				_putchar('0');
				_putchar(hour + '0');
			}
			else if (hour >= 10)
			{
				_putchar((hour / 10) + '0');
				_putchar((hour % 10) + '0');
			}
			if (minutes < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(minutes + '0');
			}
			else if (j >= 10)
			{
				_putchar(':');
				_putchar((minutes / 10) + '0');
				_putchar((minutes % 10) + '0');
			}
		}
	}
}
