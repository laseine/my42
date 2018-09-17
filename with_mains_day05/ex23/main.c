
void	*ft_print_memory(void *addr, unsigned int size);

int		main(void)
{
	char *str = "Voyons voir donc ce qui se passe a cette adresse ...";

	ft_print_memory(str, 256);
	
    return (0);
}