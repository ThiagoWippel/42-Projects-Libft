# ft\_memset Documentation

### Function Prototype / Protótipo da Função

```c
void *ft_memset(void *b, int c, size_t len);
```

---

### Description / Descrição

`ft_memset` fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`.

`ft_memset` preenche os primeiros `len` bytes da área de memória apontada por `b` com o byte constante `c`.

---

### Parameters / Parâmetros

`void *b`: Pointer to the memory area to be filled.

`int c`: The byte value to set, passed as an int but converted to unsigned char internally.

`size_t len`: Number of bytes to be set to the value `c`.



`void *b`: Ponteiro para a área de memória a ser preenchida.

`int c`: Valor do byte a ser definido, passado como int mas convertido para unsigned char internamente.

`size_t len`: Número de bytes a serem preenchidos com o valor `c`.

---

### Return Value / Valor de Retorno

Returns the pointer `b` to the memory area filled.
Retorna o ponteiro `b` para a área de memória preenchida.

---

### Details / Detalhes

The function casts the memory area to an unsigned char pointer and sets each byte to `c` in a loop until `len` bytes are set.
This implementation mimics the behavior of the standard C `memset` function.

A função converte a área de memória para um ponteiro unsigned char e define cada byte para `c` em um loop até que `len` bytes sejam preenchidos.
Esta implementação reproduz o comportamento da função `memset` da biblioteca padrão C.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10] = "abcdefghi";
    ft_memset(buffer, 'X', 5);
    printf("Resulting string: %s\n", buffer);
    return 0;
}
```

---
