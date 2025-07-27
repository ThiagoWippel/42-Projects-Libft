# ft\_memchr Documentation

### Function Prototype / Protótipo da Função

```c
void *ft_memchr(const void *str, int c, size_t n);
```

---

### Description / Descrição

`ft_memchr` scans the initial `n` bytes of the memory area pointed to by `str` for the first occurrence of the byte value `c`.
The comparison is done byte by byte as `unsigned char`.

`ft_memchr` procura, nos primeiros `n` bytes da área de memória apontada por `str`, a primeira ocorrência do byte de valor `c`.
A comparação é feita byte a byte como `unsigned char`.

---

### Parameters / Parâmetros

* `const void *str`: Pointer to the memory area to search.
* `int c`: Byte value to search for, interpreted as an unsigned char.
* `size_t n`: Number of bytes to examine.

 

* `const void *str`: Ponteiro para a área de memória onde será feita a busca.
* `int c`: Valor do byte a ser procurado, interpretado como unsigned char.
* `size_t n`: Número de bytes a serem examinados.

---

### Return Value / Valor de Retorno

Returns a pointer to the first occurrence of the byte `c` in the memory area, or `NULL` if not found.

Retorna um ponteiro para a primeira ocorrência do byte `c` na área de memória, ou `NULL` se não for encontrado.

---

### Details / Detalhes

The function is often used for binary data since it does not depend on null terminators.
The search stops as soon as the byte is found or after `n` bytes have been checked.

A função é frequentemente usada com dados binários, pois não depende de terminadores nulos.
A busca para assim que o byte é encontrado ou após `n` bytes terem sido verificados.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char data[] = {0, 1, 2, 3, 4, 5};
    char *ptr = ft_memchr(data, 3, 6);
    if (ptr != NULL)
        printf("Found byte 3 at position: %ld\n", ptr - data);
    else
        printf("Byte not found.\n");
    return 0;
}
```

---
