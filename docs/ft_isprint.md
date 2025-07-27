# ft\_isprint Documentation

### Function Prototype / Protótipo da Função

```c
int ft_isprint(int c);
```

---

### Description / Descrição

`ft_isprint` checks whether the given character `c` is a printable ASCII character, including space.

`ft_isprint` verifica se o caractere fornecido `c` é um caractere ASCII imprimível, incluindo espaço.

---

### Parameters / Parâmetros

- `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or EOF).

&nbsp;

- `int c`: Caractere a ser testado, passado como inteiro (geralmente um `unsigned char` convertido para `int` ou EOF).

---

### Return Value / Valor de Retorno

Returns **non-zero (true)** if `c` is a printable character between ASCII 32 (space) and 126 (\~).
Returns **0 (false)** otherwise, including when `c` is outside the ASCII range (0–127).

Retorna **diferente de zero (verdadeiro)** se `c` for um caractere imprimível entre ASCII 32 (espaço) e 126 (\~).
Retorna **0 (falso)** caso contrário, inclusive quando `c` estiver fora do intervalo ASCII (0–127).

---

### Details / Detalhes

The function first checks if `c` is within the ASCII range. If not, it returns 0 immediately.
Then it verifies if `c` lies between ASCII 32 and 126, which represent printable characters.
This implementation follows the behavior of the standard C `isprint` function.

A função primeiro verifica se `c` está dentro do intervalo ASCII. Se não estiver, retorna 0 imediatamente.
Em seguida, verifica se `c` está entre ASCII 32 e 126, que correspondem a caracteres imprimíveis.
Esta implementação segue o comportamento da função `isprint` da biblioteca padrão C.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = ' ';
    if (ft_isprint(ch))
        printf("'%c' is a printable character.\n", ch);
    else
        printf("'%c' is not a printable character.\n", ch);
    return 0;
}
```

---
