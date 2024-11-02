

/*

-- islapha:
int main()
{
	printf("Test1: %d\n", ft_isalpha('a')); 
	printf("Test2: %d\n", ft_isalpha('.')); 
	printf("Test3: %d\n", ft_isalpha('G')); 
	printf("Test4: %d\n", ft_isalpha('1'));
}


-- is digit:
int main()
{
	printf("Test1: %d\n", ft_isdigit('1')); 
	printf("Test2: %d\n", ft_isdigit('d')); 
	printf("Test3: %d\n", ft_isdigit('.')); 
	printf("Test4: %d\n", ft_isdigit('	'));
}


--isalnum:
int main()
{
	printf("Test1: %d\n", ft_isalnum('p')); 
	printf("Test2: %d\n", ft_isalnum('2')); 
	printf("Test3: %d\n", ft_isalnum('1')); 
	printf("Test4: %d\n", ft_isalnum('.'));
}

--isascii:
int main()
{
	printf("Test1: %d\n", ft_isascii('?')); 
	printf("Test2: %d\n", ft_isascii('s')); 
	printf("Test3: %d\n", ft_isascii('Í')); 
	printf("Test4: %d\n", ft_isascii('.'));
}


-- isprint:
int main()
{
	printf("Test1: %d\n", ft_isprint('@')); 
	printf("Test2: %d\n", ft_isprint('~')); 
	printf("Test3: %d\n", ft_isprint('%')); 
	printf("Test4: %d\n", ft_isprint('	'));
}


--strlen:
int main()
{
	char *test1 = "Hello World";
	char *test2 = "queT@l? como estas?";
	printf("La cantidad de letras es: %zu\n", ft_strlen(test1));
	printf("La cantidad de letras es: %zu\n", ft_strlen(test2));
	return 0;
}


--memset:
int	main(void)
{
	char test1[15] = "Hello Word";
    char x = 'f';

    ft_memset(test1, x, 3);
    printf("%s\n", test1);
    return 0;
}


--bzero:
int	main(void)
{
	char test1[15] = "Hello Word";
 
    ft_bzero(test1, 2);
    printf("el resultado es: %s\n", test1);
    return 0;
}


-- memcpy:
int	main(void)
{
	char origen[] = "como estas?";
	char destino[20] = "hola";
 
    ft_memcpy(destino, origen, 9);
    printf("la cadena copiada es %s\n", destino);
    return 0;
}


-- memmove:
int	main(void)
{
	char origen[] = "Hello Word, I love Y";
	char destino[25] = " ";
 
    ft_memmove(destino, origen, 9);
    printf("la cadena copiada es %s\n", destino);
    return 0;
}


--strlcpy:
int main()
{
    char origen[] = "hola como estas ?";
    char destino[20] = "aqui to bien";
 
	ft_strlcpy(destino, origen, 8);
  	printf("Cadena copiada: %s\n", destino);
	printf("Long cadena src: %zu\n", ft_strlcpy(destino, origen, 9));
    return 0;
}


--toupper:
int	main()
{
	int c = 'b';
	printf("mi letra inicial es: %c\n", c);	
	printf("y ahora mi letra es: %c\n",ft_toupper(c));	
	return 0;
}


-- tolower:
int	main()
{
	int c = 'A';
	printf("Tengo esta letra: %c\n", c);
	printf("Y ahora esta en Minuscula: %c\n", ft_tolower(c));
	return (0);
}


-- strchr:
int main()
{
	const char *s = "la prueba";
	int c = 'e';
	char *find_char = strchr(s, c);
	if (find_char)
		printf("Una coincidencia: %c en el %ld byte", *find_char, find_char - s);
	else
		printf("No hubo coincidencia alguna");
}


--strrchr:
int main()
{
	const char str[18] = "Vamonos a dormir";
	int c = '\0';
	char *res = ft_strrchr(str, c);
	if (resultado)
		printf("hay un char: %c en el byte: %ld\n", *res, resultado - str);
	else
		printf("No hubo coincidencia alguna\n"); 
}


--memchr:
int main()
{
	char string[] = "estamos buscando algo";
	char letter = 'o';
	char *resultado = (char *)ft_memchr(string, letter, 5);
	printf("coindicencia: %c, en posicion %ld", *resultado, resultado - string);
}


-- memcmp:
int main()
{
	char s1[] = "hambre";
	char s2[] = "hombre";
	int result = ft_memcmp(s1, s2, 5);
	if (result > 0)
		printf("The string s2 has %d bytes more than s1", result);
	if (result == 0)
		printf("My string s1 is the same as s2");
	else
		printf("The string s1 has %d bytes less than s2", result);
}


--strnstr:
int main()
{
  char s1[] = "Esta es una frase de prueba";
  char s2[] = "una";
  int size = 25;
  printf("El resultado de mi string es: %s", ft_strnstr(s1, s2, size));
}


--atoi:
int main()
{
	char str[] = " 69\n";
	int result = ft_atoi(str);
	printf("encontre %d", result);
}


--strdup:
int main()
{
	char original[] = "paRAngaRIcutIRIMIcuaro";
	char *dupl = ft_strdup(original);
	if (dupl)
	{
		printf("La cadena duplicada es: %s\n", dupl);
		free(dupl);
	}
	else
		printf("Error al duplicar la cadena\n");
}


--substr:
int main()
{
	char s[] = "una copia bella";
	printf("%s\n", ft_substr(s, 2, 8));
	return 0;
}


--strjoin:
int	main()
{
  char s1[] = "una copia bella";
  char s2[] = " gracias a ti";
  char *new_str = ft_strjoin(s1, s2);
  printf("%s\n", new_str);
  return 0;
}


--strtrim:
int main()
{
	char s1[] = "asfffholidasd";
	char s2[] = "fsadf";
	char *new_str = ft_strtrim(s1, s2);
	printf("%s\n", new_str);
	free (new_str);
	return 0;
}


-- split:
int	main()
{
	const char *s = "una frase linda";
	char delim = ' ';
	char **result = ft_split(s, delim);

	int	i = 0;
	if (!result)
		return (1);
	printf("mi array es:\n");
	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	free_array(result);
	free (result);
}


-- itoa:
int main()
{
	 int n = -528;
	char *numeros = ft_itoa(n);
	if (numeros)
	{
		printf("El número en char es: %s\n", numeros);
		free(numeros);
	}
	else
		printf("Error al convertir el número.\n");
	return 0;
}


-- strmapi:
char	example_funct(unsigned int i, char c)
{
	i += i;
	if (c >= 'a' && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}
int	main()
{
	char	str[] = "Hola, Que tal 42";
	char	*result;

	result = ft_strmapi(str, example_funct);
	if (result)
	{
		printf("Original: %s\n", str);
		printf("Modificadad por ft_str_mapi: %s\n", result);
		free(result);
	}
	return (0);
}


-- striteri:
void	transform_char(unsigned int i, char *c)
{
    // Convertimos a mayúsculas si el índice es impar.
    if (i % 2 != 0)
    {
        *c = toupper(*c);
    }
}


-- ft_putchar_fd:
int main(void)
{
       char str[] = "hola mundo";
    
      ft_striteri(str, transform_char);
    
      printf("Resultado: %s\n", str);
    
    return (0);
}


-- putchar_fd:
int main(void)
{
    int fd = open("prueba_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) 
	{
		printf("Error al abrir el archivo");
		return 1;
	}

    ft_putchar_fd('E', fd); // Escribir 'B' en el archivo

    close(fd);

    return 0;
}


-- ft_putstr_fd:
int main(void)
{
    int fd = open("prueba_fd.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1) 
	{
		printf("Error al abrir el archivo");
		return 1;
	}

    ft_putstr_fd("Esta es una prueba en un archivo.\n", fd); 
    close(fd);
    return 0;
}


-- ft_putnbr_fd:
int main() 
{
    int fd = open("prueba.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) 
	{
		printf("Error al abrir el archivo");
		return 1;
	}

    ft_putnbr_fd(12345, fd);
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(-6789, fd);
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(-2147483648, fd);
    write(fd, "\n", 1); // Nueva línea
    ft_putnbr_fd(0, fd);
    write(fd, "\n", 1); // Nueva línea

    close(fd);
    return 0;
}*/
