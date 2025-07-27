# ft\_strjoin Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strjoin(char const *s1, char const *s2);
```

---

### Description / Descrição

`ft_strjoin` allocates and returns a new string, which is the result of the concatenation of `s1` and `s2`.

`ft_strjoin` aloca e retorna uma nova string, que é o resultado da concatenação de `s1` com `s2`.

---

### Parameters / Parâmetros

* `char const *s1`: The prefix string.
* `char const *s2`: The suffix string to be appended after `s1`.

 

* `char const *s1`: A string prefixo.
* `char const *s2`: A string sufixo a ser concatenada após `s1`.

---

### Return Value / Valor de Retorno

Returns a pointer to the newly allocated string resulting from the concatenation.
Returns `NULL` if either `s1` or `s2` is `NULL` or if the memory allocation fails.

Retorna um ponteiro para a nova string alocada resultante da concatenação.
Retorna `NULL` se `s1` ou `s2` forem `NULL` ou se a alocação de memória falhar.

---

### Details / Detalhes

The function calculates the lengths of `s1` and `s2`, allocates memory to hold the combined string plus the null terminator, copies both strings sequentially using `ft_memcpy`, and ensures null termination at the end.

A função calcula os comprimentos de `s1` e `s2`, aloca memória para conter a string combinada mais o terminador nulo, copia ambas as strings sequencialmente usando `ft_memcpy` e garante a terminação nula no final.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
    char *greeting = "Hello, ";
    char *name = "world!";
    char *message = ft_strjoin(greeting, name);
    if (message)
    {
        printf("%s\n", message);
        free(message);
    }
    else
    {
        printf("Allocation failed.\n");
    }
    return 0;
}
```

---
