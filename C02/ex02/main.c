#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "ft_str_is_alpha.c"

int main()
{
	printf("%d\n", ft_str_is_alpha("ababab"));
	printf("%d\n", ft_str_is_alpha("121211"));
	printf("%d\n", ft_str_is_alpha("a1a1a1a"));
	printf("%d\n", ft_str_is_alpha("1/1/1*-24"));
	printf("%d\n", ft_str_is_alpha("         "));
	printf("%d\n", ft_str_is_alpha("a"));
	printf("%d\n", ft_str_is_alpha("ab"));
	
}