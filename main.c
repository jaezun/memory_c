#include "memory.h"
#include <sys/mman.h>
#include <stdio.h>

int			main(int ac, char **av)
{
	int		i;
	char	*str;	

	str = (char*)mmap(0, (atoi(av[2])) + 1, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);
	i = 0;
	while (i < (atoi(av[2])))
		str[i++] = av[1][0];
	str[i] = '\0';
	printf("%s\n", str);
	return (0);
}
