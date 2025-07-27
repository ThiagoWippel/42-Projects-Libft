# ft\_strlcat Documentation

### Function Prototype / Protótipo da Função

```c
size_t ft_strlcat(char *dest, const char *src, size_t size);
```

---

### Description / Descrição

`ft_strlcat` appends the null-terminated string `src` to the end of `dest`. It appends at most `size - strlen(dest) - 1` bytes, null-terminating the result.

`ft_strlcat` concatena a string terminada em nulo `src` ao final de `dest`. Ela adiciona no máximo `size - strlen(dest) - 1` bytes, finalizando com um nulo.

---

### Parameters / Parâmetros

* `char *dest`: Destination string to which `src` will be appended.
* `const char *src`: Source string to append to `dest`.
* `size_t size`: Total size of the destination buffer, including the null terminator.

 

* `char *dest`: String de destino à qual `src` será concatenada.
* `const char *src`: String de origem a ser adicionada ao final de `dest`.
* `size_t size`: Tamanho total do buffer de destino, incluindo o terminador nulo.

---

### Return Value / Valor de Retorno

Returns the initial length of `dest` plus the length of `src`.
If the return value is greater than or equal to `size`, truncation occurred.

Retorna o comprimento inicial de `dest` mais o comprimento de `src`.
Se o valor retornado for maior ou igual a `size`, houve truncamento.

---

### Details / Detalhes

If `size` is less than or equal to `strlen(dest)`, the function returns `size + strlen(src)` without appending.
Otherwise, it appends as much of `src` as possible and null-terminates the result.
This function mimics the behavior of the BSD `strlcat` function.

Se `size` for menor ou igual a `strlen(dest)`, a função retorna `size + strlen(src)` sem concatenar.
Caso contrário, ela concatena o máximo possível de `src` e termina com nulo.
Esta função imita o comportamento da função `strlcat` da BSD.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[20] = "Hello, ";
    size_t result = ft_strlcat(buffer, "world!", sizeof(buffer));
    printf("Result: %s (Total length: %zu)\n", buffer, result);
    return 0;
}
```

---
