#include "../ex09/ft_strcapitalize.c"
#include <stdio.h>

int	main(void)
{
	char test[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(test));
	printf("%s\n", "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
	return (0);
}
