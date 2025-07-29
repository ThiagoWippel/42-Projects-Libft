# ft\_strmapi Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

---

### Description / Descrição

`ft_strmapi` applies the function `f` to each character of the string `s`, passing its index as the first argument, and creates a new string resulting from successive applications of `f`.

`ft_strmapi` aplica a função `f` a cada caractere da string `s`, passando seu índice como primeiro argumento, e cria uma nova string resultante das aplicações sucessivas de `f`.

---

### Parameters / Parâmetros

* `char const *s`: The string to be mapped.
* `char (*f)(unsigned int, char)`: The function to apply to each character.

 

* `char const *s`: A string a ser percorrida.
* `char (*f)(unsigned int, char)`: Função a ser aplicada a cada caractere.

---

### Return Value / Valor de Retorno

Returns a new string resulting from applying `f` to each character of `s`, or `NULL` if memory allocation fails.

Retorna uma nova string resultante da aplicação de `f` a cada caractere de `s`, ou `NULL` se a alocação de memória falhar.

---

### Details / Detalhes

Each character in the original string `s` is transformed by the function `f`, which receives the character's index and its value.
The function does not modify the original string and allocates a new one.
Returns `NULL` if `s` or `f` is `NULL`, or if allocation fails.

Cada caractere da string original `s` é transformado pela função `f`, que recebe o índice e o valor do caractere.
A função não modifica a string original e aloca uma nova.
Retorna `NULL` se `s` ou `f` forem `NULL`, ou se a alocação falhar.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

char to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *result = ft_strmapi("libft", to_upper_if_even);
	if (result)
	{
		printf("Mapped string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Mapping failed.\n");
	}
	return 0;
}
```

---
