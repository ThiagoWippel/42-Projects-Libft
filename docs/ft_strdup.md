# ft\_strdup Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strdup(const char *str);
```

---

### Description / Descrição

`ft_strdup` duplicates the null-terminated string `str` by allocating sufficient memory and copying the string contents into the new memory area.

`ft_strdup` duplica a string terminada em nulo `str` alocando memória suficiente e copiando o conteúdo da string para essa nova área de memória.

---

### Parameters / Parâmetros

* `const char *str`: The null-terminated string to duplicate.

 

* `const char *str`: A string terminada em nulo a ser duplicada.

---

### Return Value / Valor de Retorno

Returns a pointer to the newly allocated duplicate string.
Returns `NULL` if memory allocation fails.

Retorna um ponteiro para a nova string duplicada alocada.
Retorna `NULL` se a alocação de memória falhar.

---

### Details / Detalhes

The function first calculates the length of `str` (including the terminating null byte).
Then it allocates memory of sufficient size, copies the string using `ft_strlcpy`, and returns the pointer to the copy.

A função calcula o comprimento de `str` (incluindo o byte nulo terminador).
Em seguida, aloca memória do tamanho suficiente, copia a string usando `ft_strlcpy` e retorna o ponteiro para a cópia.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *original = "Hello, 42!";
    char *copy = ft_strdup(original);
    if (copy)
    {
        printf("Copied string: %s\n", copy);
        free(copy);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
```

---
