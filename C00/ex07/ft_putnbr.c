void ft_putnbr(int nb)
{
	nb += 48;
	write(1, &nb, 1);
	write(1, "\n", 1);
}
