# ft\_calloc Documentation

### Function Prototype / Protótipo da Função

```c
void *ft_calloc(size_t nmemb, size_t size);
```

---

### Description / Descrição

`ft_calloc` allocates memory for an array of `nmemb` elements of `size` bytes each, initializes all bytes to zero, and returns a pointer to the allocated memory.

`ft_calloc` aloca memória para um array de `nmemb` elementos de `size` bytes cada, inicializa todos os bytes com zero e retorna um ponteiro para a memória alocada.

---

### Parameters / Parâmetros

* `size_t nmemb`: Number of elements to allocate.
* `size_t size`: Size in bytes of each element.

 

* `size_t nmemb`: Número de elementos a serem alocados.
* `size_t size`: Tamanho em bytes de cada elemento.

---

### Return Value / Valor de Retorno

Returns a pointer to the allocated and zero-initialized memory.
Returns `NULL` if allocation fails or if integer overflow occurs during size calculation.

Retorna um ponteiro para a memória alocada e inicializada com zero.
Retorna `NULL` se a alocação falhar ou se ocorrer overflow na multiplicação do tamanho.

---

### Details / Detalhes

If either `nmemb` or `size` is zero, the function returns the result of `malloc(0)`, which may be `NULL` or a unique pointer.
The function checks for overflow by verifying that the multiplication `nmemb * size` does not wrap around.
Memory is zeroed using `ft_bzero` after allocation.

Se `nmemb` ou `size` for zero, a função retorna o resultado de `malloc(0)`, que pode ser `NULL` ou um ponteiro único válido.
A função verifica overflow garantindo que a multiplicação `nmemb * size` não tenha resultado incorreto.
A memória é zerada com `ft_bzero` após a alocação.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        for (int i = 0; i < 5; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
```

---
