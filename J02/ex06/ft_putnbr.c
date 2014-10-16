#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	size;

	size = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	temp = nb;
	while ((temp = temp / 10) > 0)
		size = size * 10;
	temp = nb;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp = temp % size;
		size = size / 10;
	}
}

int	main(int argc, char **argv)
{
	int nb;

	nb = atoi(argv[1]);
	if (argc == 2)
	{
		ft_putnbr(nb);
	}
}
