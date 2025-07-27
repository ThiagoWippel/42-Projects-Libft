# ft\_memcpy Documentation

### Function Prototype / Protótipo da Função

```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```

---

### Description / Descrição

`ft_memcpy` copies `n` bytes from the memory area `src` to the memory area `dest`. The memory areas must not overlap.

`ft_memcpy` copia `n` bytes da área de memória `src` para a área de memória `dest`. As áreas de memória não devem se sobrepor.

---

### Parameters / Parâmetros

* `void *dest`: Pointer to the destination memory area where bytes will be copied.
* `const void *src`: Pointer to the source memory area from which bytes will be copied.
* `size_t n`: Number of bytes to copy.

 

* `void *dest`: Ponteiro para a área de memória destino onde os bytes serão copiados.
* `const void *src`: Ponteiro para a área de memória origem de onde os bytes serão copiados.
* `size_t n`: Número de bytes a serem copiados.

---

### Return Value / Valor de Retorno

Returns a pointer to the destination memory area `dest`.

Retorna um ponteiro para a área de memória destino `dest`.

---

### Details / Detalhes

The function casts the source and destination pointers to `unsigned char *` and copies the bytes one by one in a loop.
This implementation mimics the behavior of the standard C `memcpy` function, which requires non-overlapping memory areas.

A função converte os ponteiros de origem e destino para `unsigned char *` e copia os bytes um a um em um loop.
Esta implementação reproduz o comportamento da função `memcpy` da biblioteca padrão C, que exige que as áreas de memória não se sobreponham.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char src[] = "Hello World";
    char dest[20];
    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("Copied string: %s\n", dest);
    return 0;
}
```

---
