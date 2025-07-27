# ft\_memmove Documentation

### Function Prototype / Protótipo da Função

```c
void *ft_memmove(void *dest, const void *src, size_t n);
```

---

### Description / Descrição

`ft_memmove` copies `n` bytes from the memory area `src` to the memory area `dest`. The memory areas may overlap.

`ft_memmove` copia `n` bytes da área de memória `src` para a área de memória `dest`. As áreas de memória podem se sobrepor.

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

The function detects whether the source and destination memory areas overlap and copies the bytes accordingly to prevent data corruption.
If `dest` is higher than `src` in memory, copying is done backwards; otherwise, it copies forwards.
This implementation mimics the behavior of the standard C `memmove` function.

A função detecta se as áreas de memória origem e destino se sobrepõem e copia os bytes de forma a evitar corrupção de dados.
Se `dest` está em endereço maior que `src`, a cópia é feita de trás para frente; caso contrário, é feita de frente para trás.
Esta implementação reproduz o comportamento da função `memmove` da biblioteca padrão C.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[] = "Hello World";
    ft_memmove(buffer + 6, buffer, 5);
    printf("Resulting string: %s\n", buffer);
    return 0;
}
```

---
