#include <stdio.h>
#include <string.h>
#include "ft_str_is_printable.c"

int main()
{
printf("%d", ft_str_is_printable("¶something wrong¶"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("@#this should work *,"));
}