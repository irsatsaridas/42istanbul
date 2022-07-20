void ft_print_comb(void)
{
	for(int i = 48; i < 58; i++)
	{
		for(int j = i + 1; j < 58; j++)
		{
			write(1,&i,1);
			write(1,&j,1);
			write(1,&k,1);
			write(1,",",2);
		}
	}
}
