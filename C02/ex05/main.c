#include <stdio.h>
#include <string.h>
#include "ft_str_is_uppercase.c"

int main()
{
	printf("%d\n", ft_str_is_uppercase("11111"));
	printf("%d\n", ft_str_is_uppercase("aaaaaa"));
	printf("%d\n", ft_str_is_uppercase("aBaYzYw"));
	printf("%d\n", ft_str_is_uppercase("BBBBBB"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("//-098546"));
}