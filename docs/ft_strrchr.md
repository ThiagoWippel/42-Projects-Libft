# ft\_strrchr Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_strrchr(const char *str, int c);
```

---

### Description / Descrição

`ft_strrchr` locates the **last** occurrence of the character `c` in the null-terminated string `str`.

`ft_strrchr` localiza a **última** ocorrência do caractere `c` na string terminada em nulo `str`.

---

### Parameters / Parâmetros

* `const char *str`: The string in which to search for the character.
* `int c`: The character to locate, passed as an int but interpreted as an unsigned char.

 

* `const char *str`: A string na qual será feita a busca pelo caractere.
* `int c`: O caractere a ser localizado, passado como int mas interpretado como unsigned char.

---

### Return Value / Valor de Retorno

Returns a pointer to the **last** occurrence of `c` in `str`, or `NULL` if `c` is not found.
If `c` is `'\0'`, a pointer to the null terminator is returned.

Retorna um ponteiro para a **última** ocorrência de `c` em `str`, ou `NULL` se `c` não for encontrado.
Se `c` for `'\0'`, um ponteiro para o terminador nulo é retornado.

---

### Details / Detalhes

The function starts from the end of the string and scans backward, stopping at the first match (i.e., the last occurrence from the beginning).
It correctly handles the null terminator `'\0'` as a valid character.

A função começa do final da string e percorre de trás para frente, parando na primeira correspondência (ou seja, a última ocorrência a partir do início).
Ela trata corretamente o terminador nulo `'\0'` como um caractere válido.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *text = "banana";
    char *ptr = ft_strrchr(text, 'a');
    if (ptr)
        printf("Last occurrence found at: %s\n", ptr);
    else
        printf("Character not found.\n");
    return 0;
}
```

---
