#include <stdio.h>
/**
 * *cap_string - function that concatenates two strings
 *
 * @d : parameter to check
 *
 * Return: string in uppercase.
 */

char *cap_string(char *d)
{
	int a, b;
	char sep[] = {10, 9, 32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	for (a = 0; d[a] != '\0'; a++)
	{
		if (d[a] >= 97 && d[a] <= 122)
		{
			if (a == 0)
				d[0] = d[0] - 32;
			else
			{
				for (b = 0; sep[b] != '\0'; b++)
				{
					if (d[a - 1] == sep[b])
						d[a] = d[a] - 32;
				}
			}
		}
	}
	return (d);
}
