# ft\_striteri Documentation

### Function Prototype / Protótipo da Função

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

---

### Description / Descrição

`ft_striteri` applies the function `f` to each character of the string `s`, passing the character’s index and a pointer to the character itself. It modifies the original string in place.

`ft_striteri` aplica a função `f` a cada caractere da string `s`, passando o índice do caractere e um ponteiro para o próprio caractere. A string original é modificada diretamente.

---

### Parameters / Parâmetros

* `char *s`: The string to iterate through.
* `void (*f)(unsigned int, char *)`: The function to apply to each character.

 

* `char *s`: A string a ser percorrida.
* `void (*f)(unsigned int, char *)`: Função a ser aplicada a cada caractere.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function `f` is called for each character in the string `s`, and it is allowed to modify the character via its pointer.
The index of the character is passed as the first argument.
If either `s` or `f` is `NULL`, the function does nothing.

A função `f` é chamada para cada caractere da string `s`, podendo modificá-lo por meio do ponteiro.
O índice do caractere é passado como primeiro argumento.
Se `s` ou `f` forem `NULL`, nada é feito.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

void	to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int	main(void)
{
	char	str[] = "libft42";
	ft_striteri(str, to_upper_even);
	printf("Modified string: %s\n", str);
	return 0;
}
```

---
