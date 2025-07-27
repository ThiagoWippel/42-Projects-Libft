# ft\_strchr Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strchr(const char *str, int c);
```

---

### Description / Descrição

`ft_strchr` locates the first occurrence of the character `c` in the null-terminated string `str`.

`ft_strchr` localiza a primeira ocorrência do caractere `c` na string terminada em nulo `str`.

---

### Parameters / Parâmetros

* `const char *str`: The string in which to search for the character.
* `int c`: The character to locate, passed as an int but interpreted as an unsigned char.

 

* `const char *str`: A string na qual será feita a busca pelo caractere.
* `int c`: O caractere a ser localizado, passado como int mas interpretado como unsigned char.

---

### Return Value / Valor de Retorno

Returns a pointer to the first occurrence of `c` in `str`, or `NULL` if `c` is not found.
If `c` is `'\0'`, a pointer to the null terminator is returned.

Retorna um ponteiro para a primeira ocorrência de `c` em `str`, ou `NULL` se `c` não for encontrado.
Se `c` for `'\0'`, um ponteiro para o terminador nulo é retornado.

---

### Details / Detalhes

The function scans the string from left to right, comparing each character with `c`.
It includes a specific check for the null terminator, allowing detection of `'\0'` as a valid match.

A função percorre a string da esquerda para a direita, comparando cada caractere com `c`.
Ela inclui uma verificação específica para o terminador nulo, permitindo detectar `'\0'` como uma correspondência válida.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *text = "42 São Paulo";
    char *ptr = ft_strchr(text, 'S');
    if (ptr)
        printf("Character found: %s\n", ptr);
    else
        printf("Character not found.\n");
    return 0;
}
```

---
