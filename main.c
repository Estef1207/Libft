

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

--strlcat
int main()
{
	char s1[] = "hola";
	char s2[] =  "hola como estas amiguito";
	size_t size = 1;
	size_t result = ft_strlcat(s1, s2, size);
	printf("%zu\n", result);
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
	if (res)
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
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
 	i = 0;
	while (result[i])
	{
		free(result[i])
		i++;	
	}
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

____________________________________________________________________________________________________

-- ft_lstnew_bonus
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

void print_node_info(t_list *node)
{
    if (!node)
        printf("Nodo: NULL\n");
    else
    {
        printf("Nodo creado: %p\n", node);
        printf("Contenido: %p ", node->content);
        if (node->content)
            printf("(\"%s\")", (char *)node->content);
        printf("\n");
        printf("Next: %p\n", node->next);
    }
    printf("-------------------\n");
}

int main(void)
{
    // Prueba 1: Crear un nodo con contenido tipo string
    char *str = "Hola 42";
    t_list *node1 = ft_lstnew(str);
    printf("Prueba 1: Nodo con string\n");
    print_node_info(node1);
    
    // Comprobar si el contenido es correcto
    if (node1 && node1->content == str && node1->next == NULL)
        printf("✓ El nodo con string se creó correctamente\n\n");
    else
        printf("✗ Error en la creación del nodo con string\n\n");
    
    // Prueba 2: Crear un nodo con contenido numérico (usando puntero a int)
    int *num = malloc(sizeof(int));
    *num = 42;
    t_list *node2 = ft_lstnew(num);
    printf("Prueba 2: Nodo con número (puntero)\n");
    print_node_info(node2);
    printf("Valor numérico: %d\n", *(int *)node2->content);
    
    // Comprobar si el contenido es correcto
    if (node2 && node2->content == num && node2->next == NULL && *(int *)node2->content == 42)
        printf("✓ El nodo con número se creó correctamente\n\n");
    else
        printf("✗ Error en la creación del nodo con número\n\n");
    
    // Prueba 3: Crear un nodo con contenido NULL
    t_list *node3 = ft_lstnew(NULL);
    printf("Prueba 3: Nodo con contenido NULL\n");
    print_node_info(node3);
    
    // Comprobar si el nodo se creó correctamente con contenido NULL
    if (node3 && node3->content == NULL && node3->next == NULL)
        printf("✓ El nodo con contenido NULL se creó correctamente\n\n");
    else
        printf("✗ Error en la creación del nodo con contenido NULL\n\n");
    
    // Limpieza de memoria
    free(node1);
    free(num);  // Liberar el int que creamos
    free(node2);
    free(node3);
    
    return 0;
} */



-- ft_lstadd_front_bonus
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

// Función para imprimir el contenido de una lista
void print_list(t_list *lst)
{
    if (!lst)
    {
        printf("Lista vacía: NULL\n");
        return;
    }
    
    printf("Lista: ");
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Inicializar una lista vacía
    t_list *lista = NULL;
    
    // Prueba 1: Añadir a lista vacía
    printf("Prueba 1: Añadir a lista vacía\n");
    printf("Antes: ");
    print_list(lista);
    
    t_list *nodo1 = ft_lstnew(strdup("primero"));
    ft_lstadd_front(&lista, nodo1);
    
    printf("Después: ");
    print_list(lista);
    
    // Verificación
    if (lista == nodo1 && lista->next == NULL)
        printf("✓ Nodo añadido correctamente a lista vacía\n\n");
    else
        printf("✗ Error al añadir nodo a lista vacía\n\n");
    
    // Prueba 2: Añadir a lista con elementos
    printf("Prueba 2: Añadir a lista con elementos\n");
    printf("Antes: ");
    print_list(lista);
    
    t_list *nodo2 = ft_lstnew(strdup("nuevo primero"));
    ft_lstadd_front(&lista, nodo2);
    
    printf("Después: ");
    print_list(lista);
    
    // Verificación
    if (lista == nodo2 && lista->next == nodo1)
        printf("✓ Nodo añadido correctamente al inicio de la lista\n\n");
    else
        printf("✗ Error al añadir nodo al inicio de la lista\n\n");
    
    // Prueba 3: Verificar que se maneja correctamente el puntero NULL
    printf("Prueba 3: Pasar NULL como nuevo nodo\n");
    t_list *lista_antes = lista;
    ft_lstadd_front(&lista, NULL);
    
    // Verificación
    if (lista == lista_antes)
        printf("✓ La función maneja correctamente NULL como parámetro\n\n");
    else
        printf("✗ Error al manejar NULL como parámetro\n\n");
    
    // Limpieza de memoria
    while (lista)
    {
        t_list *temp = lista;
        lista = lista->next;
        free(temp->content);
        free(temp);
    }
    
    return 0;
}
*/

	

-- ft_ltsadd_back_bonus
/*int main(void)
{
    t_list *head = NULL;
    t_list *new_node1 = ft_lstnew("Primer nodo");
    t_list *new_node2 = ft_lstnew("Segundo nodo");
    t_list *new_node3 = ft_lstnew("Tercer nodo");

    ft_lstadd_back(&head, new_node1);
    ft_lstadd_back(&head, new_node2);
    ft_lstadd_back(&head, new_node3);

    t_list *temp = head;
    while (temp != NULL)
    {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    t_list *tempo;
    while (head != NULL)
    {
        tempo = head;
        head = head->next;
        free(tempo);
    }

    return 0;
}*/



	
--ft_lstlast_bonus
/*
int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    ft_lstadd_front(&head, ft_lstnew("Segundo nodo"));
    ft_lstadd_front(&head, ft_lstnew("Tercer nodo"));

    t_list *last_node = ft_lstlast(head);

    if (last_node) {
        printf("El último nodo contiene: %s\n", (char *)last_node->content);
    } else {
        printf("La lista está vacía.\n");
    }

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/



	
--- ft_lstsize_bonus
/*
int main(void)
{
    t_list *head = ft_lstnew("Primer nodo");
    t_list *second = ft_lstnew("Segundo nodo");
    t_list *third = ft_lstnew("Tercer nodo");

    ft_lstadd_front(&head, second);
    ft_lstadd_front(&head, third);

    int size = ft_lstsize(head);
    printf("El tamaño de la lista es: %d\n", size);

    t_list *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/

	


--ft_lstdelne_bonus
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de t_list (asumiendo que es así)
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

// Función auxiliar para crear un nuevo nodo
t_list *ft_lstnew(void *content)
{
    t_list *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

// Función para liberar el contenido (en este caso, strings)
void del_content(void *content)
{
    printf("Liberando contenido: %s\n", (char *)content);
    free(content);
}

// Función para imprimir la lista
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Crear algunos nodos con contenido dinámico
    char *str1 = strdup("Nodo 1");
    char *str2 = strdup("Nodo 2");
    char *str3 = strdup("Nodo 3");

    t_list *nodo1 = ft_lstnew(str1);
    t_list *nodo2 = ft_lstnew(str2);
    t_list *nodo3 = ft_lstnew(str3);

    // Conectar los nodos
    nodo1->next = nodo2;
    nodo2->next = nodo3;

    printf("Lista original:\n");
    print_list(nodo1);

    // Eliminar el nodo 2 (del medio)
    printf("\nEliminando nodo 2:\n");
    t_list *temp = nodo1->next;  // Guardar referencia a nodo2
    nodo1->next = nodo3;  // Conectar nodo1 directamente con nodo3
    ft_lstdelone(temp, del_content);

    printf("\nLista después de eliminar nodo 2:\n");
    print_list(nodo1);

    // Limpiar el resto de la lista manualmente
    printf("\nLimpieza final:\n");
    ft_lstdelone(nodo3, del_content);
    ft_lstdelone(nodo1, del_content);

    return 0;
}*/




-- ft_lstclear_bonus	
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>

// Función para eliminar el contenido
void delete_content(void *content)
{
    free(content);
}

// Función para imprimir el contenido de una lista
void print_list(t_list *lst)
{
    if (!lst)
    {
        printf("Lista vacía: NULL\n");
        return;
    }
    
    printf("Lista: ");
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Crear una lista con varios elementos
    t_list *lista = NULL;
    
    // Añadir algunos nodos
    ft_lstadd_back(&lista, ft_lstnew(strdup("uno")));
    ft_lstadd_back(&lista, ft_lstnew(strdup("dos")));
    ft_lstadd_back(&lista, ft_lstnew(strdup("tres")));
    
    printf("Lista antes de limpiar:\n");
    print_list(lista);
    
    // Limpiar la lista
    ft_lstclear(&lista, delete_content);
    
    printf("Lista después de limpiar:\n");
    print_list(lista);
    
    // Verificar que la lista ahora es NULL
    if (lista == NULL)
        printf("✓ Lista correctamente limpiada y establecida a NULL\n");
    else
        printf("✗ Error: La lista debería ser NULL después de ft_lstclear\n");
    
    return 0;
}*/




-- ft_lstiter_bonus
/*
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para convertir una cadena a mayúsculas (para usar con ft_lstiter)
void to_uppercase(void *content)
{
    char *str = (char *)content;
    
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

// Función para imprimir el contenido de una lista
void print_list(t_list *lst)
{
    if (!lst)
    {
        printf("Lista vacía: NULL\n");
        return;
    }
    
    printf("Lista: ");
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void)
{
    // Crear una lista con varios elementos
    t_list *lista = NULL;
    
    // Añadir algunos nodos con cadenas en minúsculas
    ft_lstadd_back(&lista, ft_lstnew(strdup("uno")));
    ft_lstadd_back(&lista, ft_lstnew(strdup("dos")));
    ft_lstadd_back(&lista, ft_lstnew(strdup("tres")));
    
    printf("Lista antes de aplicar ft_lstiter:\n");
    print_list(lista);
    
    // Aplicar la función to_uppercase a cada elemento
    ft_lstiter(lista, to_uppercase);
    
    printf("Lista después de aplicar ft_lstiter con to_uppercase:\n");
    print_list(lista);
    
    // Verificación: comprobar si todos los elementos están en mayúsculas
    int all_uppercase = 1;
    t_list *temp = lista;
    
    while (temp)
    {
        char *str = (char *)temp->content;
        while (*str)
        {
            if (islower(*str))
            {
                all_uppercase = 0;
                break;
            }
            str++;
        }
        if (!all_uppercase)
            break;
        temp = temp->next;
    }
    
    if (all_uppercase)
        printf("✓ Todos los elementos fueron convertidos a mayúsculas correctamente\n");
    else
        printf("✗ Error: No todos los elementos fueron convertidos a mayúsculas\n");
    
    // Limpieza de memoria
    t_list *current = lista;
    while (current)
    {
        t_list *next = current->next;
        free(current->content);
        free(current);
        current = next;
    }
    
    return 0;
}*/
-- ft_lstmap_bonus
/* 
#include "libft.h"
#include <stdio.h>
#include <string.h>

// Función para imprimir el contenido de una lista
void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%s -> ", (char *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

// Función para duplicar una cadena (para usar con ft_lstmap)
void *duplicate_str(void *content)
{
    char *str = (char *)content;
    return strdup(str);
}

// Función para convertir a mayúsculas (para usar con ft_lstmap)
void *to_uppercase(void *content)
{
    char *str = strdup((char *)content);
    char *ptr = str;
    
    while (*ptr)
    {
        if (*ptr >= 'a' && *ptr <= 'z')
            *ptr = *ptr - 32;
        ptr++;
    }
    return str;
}

// Función para eliminar contenido
void delete_content(void *content)
{
    free(content);
}

int main(void)
{
    // Prueba 1: Lista con varios elementos
    t_list *lst = NULL;
    t_list *new_lst;
    
    // Crear lista original
    ft_lstadd_back(&lst, ft_lstnew(strdup("hola")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("mundo")));
    ft_lstadd_back(&lst, ft_lstnew(strdup("42")));
    
    printf("Lista original: ");
    print_list(lst);
    
    // Prueba con duplicación simple
    new_lst = ft_lstmap(lst, duplicate_str, delete_content);
    printf("Lista duplicada: ");
    print_list(new_lst);
    
    // Prueba con transformación a mayúsculas
    t_list *upper_lst = ft_lstmap(lst, to_uppercase, delete_content);
    printf("Lista en mayúsculas: ");
    print_list(upper_lst);
    
    // Prueba 2: Lista vacía
    t_list *empty_lst = NULL;
    t_list *new_empty = ft_lstmap(empty_lst, duplicate_str, delete_content);
    printf("Lista vacía mapeada: ");
    if (new_empty == NULL)
        printf("NULL (correcto)\n");
    else
        printf("ERROR: debería ser NULL\n");
    
    // Limpieza
    ft_lstclear(&lst, delete_content);
    ft_lstclear(&new_lst, delete_content);
    ft_lstclear(&upper_lst, delete_content);
    
    return 0;
}
*/
