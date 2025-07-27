# ft\_bzero Documentation

### Function Prototype / Protótipo da Função

```c
void ft_bzero(void *str, size_t n);
```

---

### Description / Descrição

`ft_bzero` sets the first `n` bytes of the memory area pointed to by `str` to zero.

`ft_bzero` define os primeiros `n` bytes da área de memória apontada por `str` para zero.

---

### Parameters / Parâmetros

* `void *str`: Pointer to the memory area to be zeroed.
* `size_t n`: Number of bytes to set to zero.

 

* `void *str`: Ponteiro para a área de memória a ser zerada.
* `size_t n`: Número de bytes a serem definidos como zero.

---

### Return Value / Valor de Retorno

This function does not return a value.

Esta função não retorna valor.

---

### Details / Detalhes

The function uses `ft_memset` internally to fill the specified memory area with zero bytes.
This behavior mimics the standard C `bzero` function.

A função utiliza internamente `ft_memset` para preencher a área de memória especificada com bytes zero.
Este comportamento imita a função padrão C `bzero`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer, 5);
    printf("Buffer after ft_bzero: %s\n", buffer);
    return 0;
}
```

---
