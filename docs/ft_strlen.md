# ft\_strlen Documentation

### Function Prototype / Protótipo da Função

```c
size_t ft_strlen(const char *str);
```

---

### Description / Descrição

`ft_strlen` calculates the length of the null-terminated string `str`, excluding the terminating null byte (`'\0'`).

`ft_strlen` calcula o comprimento da string terminada em nulo `str`, excluindo o byte nulo final (`'\0'`).

---

### Parameters / Parâmetros

- `const char *str`: Pointer to the null-terminated string whose length is to be calculated.
&nbsp;
- `const char *str`: Ponteiro para a string terminada em nulo cuja extensão será calculada.

---

### Return Value / Valor de Retorno

Returns the number of characters in the string `str` before the terminating null byte.
Retorna o número de caracteres na string `str` antes do byte nulo terminador.

---

### Details / Detalhes

The function iterates through the string until it finds the null byte, incrementing a counter at each step.
This implementation matches the behavior of the standard C `strlen` function.

A função itera pela string até encontrar o byte nulo, incrementando um contador a cada passo.
Esta implementação corresponde ao comportamento da função `strlen` da biblioteca padrão C.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, World!";
    printf("Length of '%s' is %zu.\n", str, ft_strlen(str));
    return 0;
}
```

---
