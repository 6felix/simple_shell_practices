#include "main.h"

int main(int ac, char **av)
{
	int count = 1;

	if (ac == 1)
	{
		printf("ERROR: please rerun this executable with arguments\n");
		return (-1);
	}
		
	/*	this works but it uses ac
	 *
	 *	for (; count < ac; count++)
	 *	{
	 *		printf ("%s\n", av[count]);
	 *	}
	 */

	(void)ac;

	while (av[count] != NULL)
	{
		printf("%s\n", av[count++]);
	}

	return (0);
}
