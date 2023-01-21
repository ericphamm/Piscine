#include <stdio.h>
#include <string.h>
#include "ft_strcapitalize.c"

int main()
{
	char strtocap[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(strtocap));
}