# ft\_strtrim Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strtrim(char const *s1, char const *set);
```

---

### Description / Descrição

`ft_strtrim` allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.

`ft_strtrim` aloca e retorna uma cópia de `s1` com os caracteres especificados em `set` removidos do início e do final da string.

---

### Parameters / Parâmetros

* `char const *s1`: The string to be trimmed.
* `char const *set`: The set of characters to trim from `s1`.

 

* `char const *s1`: A string a ser aparada.
* `char const *set`: O conjunto de caracteres a ser removido de `s1`.

---

### Return Value / Valor de Retorno

Returns a pointer to the trimmed string.
Returns `NULL` if the allocation fails or if `s1` or `set` is `NULL`.

Retorna um ponteiro para a string aparada.
Retorna `NULL` se a alocação falhar ou se `s1` ou `set` forem `NULL`.

---

### Details / Detalhes

The function skips characters from the beginning and end of `s1` that appear in `set`, calculates the new length, allocates memory accordingly, and uses `ft_memcpy` to copy the trimmed portion.

A função ignora caracteres do início e do final de `s1` que aparecem em `set`, calcula o novo comprimento, aloca memória adequadamente e usa `ft_memcpy` para copiar a parte aparada.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
    char *str = "  \t\nHello, world! \n\t ";
    char *trimmed = ft_strtrim(str, " \n\t");
    if (trimmed)
    {
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed);
    }
    else
    {
        printf("Failed to allocate memory.\n");
    }
    return 0;
}
```

---
