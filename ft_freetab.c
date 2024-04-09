#include "libft.h"

void	ft_freetab(char **tab)
{
	size_t i;
	i = 0;

	while(tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}
