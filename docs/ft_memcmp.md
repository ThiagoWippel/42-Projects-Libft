# ft\_memcmp Documentation

### Function Prototype / Protótipo da Função

```c
int ft_memcmp(const void *str1, const void *str2, size_t n);
```

---

### Description / Descrição

`ft_memcmp` compares the first `n` bytes of the memory areas `str1` and `str2`.
The comparison is done byte by byte as `unsigned char`.

`ft_memcmp` compara os primeiros `n` bytes das áreas de memória `str1` e `str2`.
A comparação é feita byte a byte como `unsigned char`.

---

### Parameters / Parâmetros

* `const void *str1`: Pointer to the first memory area.
* `const void *str2`: Pointer to the second memory area.
* `size_t n`: Number of bytes to compare.

 

* `const void *str1`: Ponteiro para a primeira área de memória.
* `const void *str2`: Ponteiro para a segunda área de memória.
* `size_t n`: Número de bytes a serem comparados.

---

### Return Value / Valor de Retorno

Returns an integer less than, equal to, or greater than zero if the first differing byte in `str1` is found to be less than, equal to, or greater than the corresponding byte in `str2`.
Returns `0` if all compared bytes are equal.

Retorna um inteiro menor, igual ou maior que zero se o primeiro byte diferente em `str1` for menor, igual ou maior que o byte correspondente em `str2`.
Retorna `0` se todos os bytes comparados forem iguais.

---

### Details / Detalhes

The function stops comparing as soon as a difference is found or after `n` bytes have been checked.
It is useful for binary data comparisons where null terminators are not considered.

A função para de comparar assim que uma diferença é encontrada ou após `n` bytes terem sido verificados.
É útil para comparações de dados binários onde terminadores nulos não são considerados.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char data1[] = {1, 2, 3, 4, 5};
    char data2[] = {1, 2, 4, 4, 5};
    int result = ft_memcmp(data1, data2, 5);
    if (result == 0)
        printf("Memory areas are equal.\n");
    else
        printf("Memory areas differ.\n");
    return 0;
}
```

---
