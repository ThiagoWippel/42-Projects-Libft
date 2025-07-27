# ft\_tolower Documentation

### Function Prototype / Protótipo da Função

```c
int ft_tolower(int c);
```

---

### Description / Descrição

`ft_tolower` converts an uppercase alphabetic character to its lowercase equivalent if such a conversion is possible.

`ft_tolower` converte um caractere alfabético maiúsculo para seu equivalente em minúsculo, se possível.

---

### Parameters / Parâmetros

* `int c`: The character to be converted, passed as an integer.

 

* `int c`: O caractere a ser convertido, passado como um inteiro.

---

### Return Value / Valor de Retorno

Returns the lowercase equivalent of `c` if it is an uppercase letter.
Otherwise, returns `c` unchanged.

Retorna o equivalente minúsculo de `c` se for uma letra maiúscula.
Caso contrário, retorna `c` inalterado.

---

### Details / Detalhes

This function only affects characters in the ASCII range `'A'` to `'Z'`.
The conversion is performed by adding 32 to the ASCII value of `c`.

Esta função afeta apenas caracteres no intervalo ASCII de `'A'` a `'Z'`.
A conversão é feita somando 32 ao valor ASCII de `c`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char upper = 'H';
    char lower = ft_tolower(upper);
    printf("Original: %c → Lowercase: %c\n", upper, lower);
    return 0;
}
```

---
