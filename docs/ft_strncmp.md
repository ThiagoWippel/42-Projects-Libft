# ft\_strncmp Documentation

### Function Prototype / Protótipo da Função

```c
int ft_strncmp(const char *str1, const char *str2, size_t n);
```

---

### Description / Descrição

`ft_strncmp` compares up to `n` characters of the strings `str1` and `str2`.
The comparison is done using unsigned characters and stops at the first differing character or when `n` characters have been compared.

`ft_strncmp` compara até `n` caracteres das strings `str1` e `str2`.
A comparação é feita com caracteres sem sinal e para no primeiro caractere diferente ou quando `n` caracteres tiverem sido comparados.

---

### Parameters / Parâmetros

* `const char *str1`: First string to be compared.
* `const char *str2`: Second string to be compared.
* `size_t n`: Maximum number of characters to compare.

 

* `const char *str1`: Primeira string a ser comparada.
* `const char *str2`: Segunda string a ser comparada.
* `size_t n`: Número máximo de caracteres a serem comparados.

---

### Return Value / Valor de Retorno

Returns the difference between the first pair of differing characters, cast to `unsigned char`.
Returns `0` if the strings are equal in the first `n` characters.

Retorna a diferença entre o primeiro par de caracteres diferentes, convertidos para `unsigned char`.
Retorna `0` se as strings forem iguais nos primeiros `n` caracteres.

---

### Details / Detalhes

The function handles null-terminated strings safely.
If either string ends before `n` characters, the comparison stops at the null terminator.
It is useful for partial string comparisons or lexicographic ordering.

A função lida com segurança com strings terminadas em nulo.
Se qualquer string terminar antes de `n` caracteres, a comparação para no terminador nulo.
É útil para comparações parciais de strings ou ordenação lexicográfica.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int result = ft_strncmp("banana", "bandana", 3);
    if (result == 0)
        printf("First 3 characters are equal.\n");
    else
        printf("First 3 characters are different.\n");
    return 0;
}
```

---
