#include "rsa.h"
#include "string.h"

/**
 * main - factorize numbers from a file
 * @ac: the number of arguments passed to the command line
 * @av: a list containing the string of arguments
 *
 * Return: 0 always
 */

int main(int *ac, char **av)
{
	char *file_name = av[1];
	char *line[1024];
	size_t n = 0;
	int factor, i, j;
	int number;

	FILE *fd = fopen(file_name, "r");
	if (fd == NULL)
		return (1)

	while (getline(line, &n, fd) != -1)
	{
		number = atoi(line[0]);

		/* Perform Factorization here */
		i = 2;
		while (i <= number)
		{
			factor = j = 0;
			while (j <= number)
			{
				factor = i * j;
				if (factor == number)
				{
					printf("%d=%d*%d\n", factor, i, j);
					break;
				}
				j++;
			}
			if (factor != 0)
				break;
			i++;
		}
	}

	fclose(fd);
	return (0);
}
