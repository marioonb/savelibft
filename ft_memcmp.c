
#include <string.h>

int	ft_memcmp(const void*s1, const void*s2, size_t size)
{
	size_t i;
    unsigned char*premiere; 
 	unsigned char*deuxieme; 

    premiere = (unsigned char*)s1;
    deuxieme = (unsigned char*)s2;  


	i = 0;
	if (premiere[i] == 0 && deuxieme[i] == 0 && size == 0)
		return (0);
	while (premiere[i] == deuxieme[i] && i < size -1)
		i++;
	return (((unsigned int)premiere[i]) - ((unsigned int)deuxieme[i]));
}