# ft\_toupper Documentation

### Function Prototype / Protótipo da Função

```c
int ft_toupper(int c);
```

---

### Description / Descrição

`ft_toupper` converts a lowercase alphabetic character to its uppercase equivalent if such a conversion is possible.

`ft_toupper` converte um caractere alfabético minúsculo para seu equivalente em maiúsculo, se possível.

---

### Parameters / Parâmetros

* `int c`: The character to be converted, passed as an integer.

 

* `int c`: O caractere a ser convertido, passado como um inteiro.

---

### Return Value / Valor de Retorno

Returns the uppercase equivalent of `c` if it is a lowercase letter.
Otherwise, returns `c` unchanged.

Retorna o equivalente maiúsculo de `c` se for uma letra minúscula.
Caso contrário, retorna `c` inalterado.

---

### Details / Detalhes

This function only affects characters in the ASCII range `'a'` to `'z'`.
The conversion is performed by subtracting 32 from the ASCII value of `c`.

Esta função afeta apenas caracteres no intervalo ASCII de `'a'` a `'z'`.
A conversão é feita subtraindo 32 do valor ASCII de `c`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char lower = 'g';
    char upper = ft_toupper(lower);
    printf("Original: %c → Uppercase: %c\n", lower, upper);
    return 0;
}
```

---
