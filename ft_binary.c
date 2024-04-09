#include <libft.h>

void ft_binary (int index)
{
	int i = 31; // sizeof(int) * 8 - 1
	while(i >= 0)
	{
		if((index >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i--;
	}
	write(1, "\n\n", 2);
}