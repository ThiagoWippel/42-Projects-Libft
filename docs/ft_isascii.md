# ft\_isascii Documentation

### Function Prototype / Protótipo da Função

```c
int ft_isascii(int c);
```

---

### Description / Descrição

`ft_isascii` checks whether the given character `c` is a valid ASCII character (values between 0 and 127 inclusive).

`ft_isascii` verifica se o caractere fornecido `c` é um caractere ASCII válido (valores entre 0 e 127, inclusive).

---

### Parameters / Parâmetros

`int c`: The character to be tested, passed as an integer.

`int c`: Caractere a ser testado, passado como inteiro.

---

### Return Value / Valor de Retorno

Returns **non-zero (true)** if `c` is within the ASCII range (0–127).
Returns **0 (false)** otherwise.

Retorna **diferente de zero (verdadeiro)** se `c` estiver no intervalo ASCII (0–127).
Retorna **0 (falso)** caso contrário.

---

### Details / Detalhes

The function simply checks if `c` lies within the valid ASCII range.
This implementation mimics the behavior of the standard C `isascii` function.

A função simplesmente verifica se `c` está dentro do intervalo válido do ASCII.
Esta implementação reproduz o comportamento da função `isascii` da biblioteca padrão C.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int ch = 128;
    if (ft_isascii(ch))
        printf("%d is an ASCII character.\n", ch);
    else
        printf("%d is not an ASCII character.\n", ch);
    return 0;
}
```

---
