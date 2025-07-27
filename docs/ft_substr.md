# ft\_substr Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

---

### Description / Descrição

`ft_substr` creates a new string which is a substring of the string `s`, starting at index `start` and with a maximum length of `len`.

`ft_substr` cria uma nova string que é uma substring da string `s`, começando no índice `start` e com comprimento máximo `len`.

---

### Parameters / Parâmetros

* `char const *s`: The original null-terminated string.
* `unsigned int start`: The starting index from which to begin the substring.
* `size_t len`: The maximum length of the substring to extract.

 

* `char const *s`: A string terminada em nulo original.
* `unsigned int start`: Índice inicial para começar a substring.
* `size_t len`: Comprimento máximo da substring a ser extraída.

---

### Return Value / Valor de Retorno

Returns a pointer to the newly allocated substring.
Returns an empty string (`""`) if `start` is beyond the end of `s`.
Returns `NULL` if memory allocation fails or if `s` is `NULL`.

Retorna um ponteiro para a substring recém-alocada.
Retorna uma string vazia (`""`) se `start` estiver além do fim de `s`.
Retorna `NULL` se a alocação de memória falhar ou se `s` for `NULL`.

---

### Details / Detalhes

The function calculates the length of `s` and determines the actual substring length based on `start` and `len`.
It allocates memory for the substring plus a null terminator, copies the substring using `ft_memcpy`, and null-terminates it.
If `start` exceeds the length of `s`, it returns an empty string allocated by `ft_strdup("")`.

A função calcula o comprimento de `s` e determina o comprimento real da substring com base em `start` e `len`.
Aloca memória para a substring mais o terminador nulo, copia a substring usando `ft_memcpy` e finaliza com `\0`.
Se `start` for maior que o comprimento de `s`, retorna uma string vazia alocada por `ft_strdup("")`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *text = "Hello, 42!";
    char *sub = ft_substr(text, 7, 2);
    if (sub)
    {
        printf("Substring: %s\n", sub);
        free(sub);
    }
    else
    {
        printf("Allocation failed.\n");
    }
    return 0;
}
```

---
