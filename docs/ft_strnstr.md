# ft\_strnstr Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strnstr(const char *big, const char *little, size_t len);
```

---

### Description / Descrição

`ft_strnstr` locates the first occurrence of the null-terminated string `little` within the first `len` characters of the string `big`.

`ft_strnstr` localiza a primeira ocorrência da string terminada em nulo `little` dentro dos primeiros `len` caracteres da string `big`.

---

### Parameters / Parâmetros

* `const char *big`: The string to be searched.
* `const char *little`: The substring to search for.
* `size_t len`: The maximum number of characters to search within `big`.

 

* `const char *big`: A string onde será feita a busca.
* `const char *little`: A substring a ser procurada.
* `size_t len`: O número máximo de caracteres a serem pesquisados em `big`.

---

### Return Value / Valor de Retorno

Returns a pointer to the first occurrence of `little` within `big` (within the first `len` characters).
Returns `NULL` if `little` is not found within the first `len` characters.

If `little` is an empty string, returns `big`.


Retorna um ponteiro para a primeira ocorrência de `little` dentro de `big` (nos primeiros `len` caracteres).
Retorna `NULL` se `little` não for encontrado nos primeiros `len` caracteres.

Se `little` for uma string vazia, retorna `big`.

---

### Details / Detalhes

The function performs a bounded search ensuring it does not access memory beyond `len` characters of `big`.
It compares characters one by one until a full match of `little` is found or the length limit is reached.

A função realiza uma busca limitada para garantir que não acesse memória além de `len` caracteres em `big`.
Compara caracteres um a um até encontrar uma correspondência completa de `little` ou atingir o limite de comprimento.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *text = "Hello 42 São Paulo";
    char *found = ft_strnstr(text, "42", 10);
    if (found)
        printf("Substring found: %s\n", found);
    else
        printf("Substring not found within limit.\n");
    return 0;
}
```

---
