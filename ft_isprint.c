

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
			return (1);
	return (0);	
}
/*
int main()
{
	printf("Test1: %d\n", ft_isprint('@')); 
	printf("Test2: %d\n", ft_isprint('~')); 
	printf("Test3: %d\n", ft_isprint('%')); 
	printf("Test4: %d\n", ft_isprint('	'));
}*/
