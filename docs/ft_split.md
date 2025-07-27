# ft\_split Documentation

### Function Prototype / Protótipo da Função

```c
char **ft_split(char const *s, char c);
```

---

### Description / Descrição

`ft_split` splits the string `s` into an array of strings (words) separated by the delimiter character `c`.
The array is terminated by a `NULL` pointer.

`ft_split` divide a string `s` em um array de strings (palavras) separadas pelo caractere delimitador `c`.
O array é finalizado com um ponteiro `NULL`.

---

### Parameters / Parâmetros

* `char const *s`: The null-terminated string to be split.
* `char c`: The delimiter character used to separate words.

 

* `char const *s`: A string terminada em nulo a ser dividida.
* `char c`: Caractere delimitador usado para separar as palavras.

---

### Return Value / Valor de Retorno

Returns a pointer to a null-terminated array of strings resulting from the split.
Returns `NULL` if `s` is `NULL` or if any memory allocation fails.

Retorna um ponteiro para um array de strings terminado em `NULL` resultante da divisão.
Retorna `NULL` se `s` for `NULL` ou se alguma alocação de memória falhar.

---

### Details / Detalhes

The function counts the number of words separated by `c` and allocates memory for the array accordingly.
Each word is extracted using `ft_substr` and stored in the array.
If any allocation fails, all previously allocated memory is freed before returning `NULL`.

A função conta o número de palavras separadas por `c` e aloca memória para o array.
Cada palavra é extraída usando `ft_substr` e armazenada no array.
Se alguma alocação falhar, toda memória previamente alocada é liberada antes de retornar `NULL`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char **words = ft_split("Hello world from 42", ' ');
    if (words)
    {
        for (int i = 0; words[i] != NULL; i++)
            printf("Word[%d]: %s\n", i, words[i]);
        // Free allocated memory
        for (int i = 0; words[i] != NULL; i++)
            free(words[i]);
        free(words);
    }
    else
    {
        printf("Split failed.\n");
    }
    return 0;
}
```

---
