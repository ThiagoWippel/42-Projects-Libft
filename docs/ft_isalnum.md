# ft\_isalnum Documentation

### Function Prototype / Protótipo da Função

```c
int ft_isalnum(int c);
```

---

### Description / Descrição

`ft_isalnum` checks whether the given character `c` is alphanumeric (either a letter or a digit).

`ft_isalnum` verifica se o caractere fornecido `c` é alfanumérico (letra ou dígito).

---

### Parameters / Parâmetros

- `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or EOF).

- `int c`: Caractere a ser testado, passado como inteiro (geralmente um `unsigned char` convertido para `int` ou EOF).

---

### Return Value / Valor de Retorno

Returns **non-zero (true)** if `c` is an uppercase letter (`'A'` to `'Z'`), a lowercase letter (`'a'` to `'z'`), or a digit (`'0'` to `'9'`).
Returns **0 (false)** otherwise, including when `c` is outside the ASCII range (0–127).

Retorna **diferente de zero (verdadeiro)** se `c` for uma letra maiúscula (`'A'` a `'Z'`), uma letra minúscula (`'a'` a `'z'`) ou um dígito (`'0'` a `'9'`).
Retorna **0 (falso)** caso contrário, inclusive quando `c` estiver fora do intervalo ASCII (0–127).

---

### Details / Detalhes

The function first verifies that `c` lies within the ASCII range. If not, it immediately returns 0.
Then it checks whether `c` falls within the ASCII ranges for uppercase letters, lowercase letters, or digits.
This implementation mimics the behavior of the standard C `isalnum` function, with added validation for non-ASCII input.

A função primeiro verifica se `c` está dentro do intervalo ASCII. Se não estiver, retorna 0 imediatamente.
Em seguida, verifica se `c` está dentro dos intervalos ASCII para letras maiúsculas, letras minúsculas ou dígitos.
Esta implementação imita o comportamento da função `isalnum` da biblioteca padrão C, com validação adicional para entradas fora do ASCII.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = 'A';
    if (ft_isalnum(ch))
        printf("%c is alphanumeric.\n", ch);
    else
        printf("%c is not alphanumeric.\n", ch);
    return 0;
}
```

---
