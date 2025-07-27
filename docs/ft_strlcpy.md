# ft\_strlcpy Documentation

### Function Prototype / Protótipo da Função

```c
size_t ft_strlcpy(char *dest, const char *src, size_t size);
```

---

### Description / Descrição

`ft_strlcpy` copies up to `size - 1` characters from the null-terminated string `src` to `dest`, null-terminating the result if `size` is not 0.

`ft_strlcpy` copia até `size - 1` caracteres da string terminada em nulo `src` para `dest`, adicionando o caractere nulo ao final se `size` não for 0.

---

### Parameters / Parâmetros

* `char *dest`: Destination buffer where the string will be copied.
* `const char *src`: Source string to be copied.
* `size_t size`: Total size of the destination buffer.

 

* `char *dest`: Buffer de destino onde a string será copiada.
* `const char *src`: String de origem a ser copiada.
* `size_t size`: Tamanho total do buffer de destino.

---

### Return Value / Valor de Retorno

Returns the total length of the source string `src`.

Retorna o tamanho total da string de origem `src`.

---

### Details / Detalhes

The function ensures that the destination string is null-terminated as long as `size` is greater than 0.
It does not pad the remaining space in `dest` with null bytes.
This implementation mimics the behavior of the standard BSD `strlcpy` function.

A função garante que a string de destino seja terminada em nulo desde que `size` seja maior que 0.
Ela não preenche o restante do espaço em `dest` com bytes nulos.
Esta implementação reproduz o comportamento da função `strlcpy` da biblioteca BSD.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[10];
    size_t len = ft_strlcpy(buffer, "42SP", sizeof(buffer));
    printf("Copied string: %s (Length: %zu)\n", buffer, len);
    return 0;
}
```

---
