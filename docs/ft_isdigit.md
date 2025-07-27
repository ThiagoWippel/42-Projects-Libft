# ft\_isdigit Documentation

### Function Prototype / Protótipo da Função

```c
int ft_isdigit(int c);
```

---

### Description / Descrição

`ft_isdigit` checks whether the given character `c` is a decimal digit (`'0'` through `'9'`).

`ft_isdigit` verifica se o caractere fornecido `c` é um dígito decimal (`'0'` a `'9'`).

---

### Parameters / Parâmetros

- `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or EOF).

&nbsp;

- `int c`: Caractere a ser testado, passado como inteiro (geralmente um `unsigned char` convertido para `int` ou EOF).

---

### Return Value / Valor de Retorno

Returns **non-zero (true)** if `c` is a decimal digit between `'0'` and `'9'`.
Returns **0 (false)** otherwise, including when `c` is outside the ASCII range (0–127).

Retorna **diferente de zero (verdadeiro)** se `c` for um dígito decimal entre `'0'` e `'9'`.
Retorna **0 (falso)** caso contrário, inclusive quando `c` estiver fora do intervalo ASCII (0–127).

---

### Details / Detalhes

The function first verifies that `c` lies within the ASCII range. If not, it immediately returns 0.
Then it checks whether `c` falls within the ASCII values for digits `'0'` through `'9'`.
This implementation mimics the behavior of the standard C `isdigit` function, with added validation for non-ASCII input.

A função primeiro verifica se `c` está dentro do intervalo ASCII. Se não estiver, retorna 0 imediatamente.
Em seguida, verifica se `c` está nos valores ASCII correspondentes aos dígitos de `'0'` a `'9'`.
Esta implementação imita o comportamento da função `isdigit` da biblioteca padrão C, com validação adicional para entradas fora do ASCII.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = '3';
    if (ft_isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is not a digit.\n", ch);
    return 0;
}
```

---
