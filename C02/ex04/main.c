#include <stdio.h>
#include <string.h>
#include "ft_str_is_lowercase.c"

int main()
{
	printf("%d\n", ft_str_is_lowercase("ababab"));
	printf("%d\n", ft_str_is_lowercase("121211"));
	printf("%d\n", ft_str_is_lowercase("a1a1a1a"));
	printf("%d\n", ft_str_is_lowercase("1/1/1*-24"));
	printf("%d\n", ft_str_is_lowercase("ABYAHN"));
	printf("%d\n", ft_str_is_lowercase(""));
}