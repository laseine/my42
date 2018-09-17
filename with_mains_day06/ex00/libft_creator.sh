gcc -c -Wall -Werror -Wextra ft_*.c
ar rc libft.a ft*.o
ranlib libft.a
rm *.o