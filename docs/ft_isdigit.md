# ft\_isdigit Documentation

## English Version

### Function Prototype

```c
int ft_isdigit(int c);
```

### Description

`ft_isdigit` checks whether the given character `c` is a decimal digit (`'0'` through `'9'`).

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or EOF).

### Return Value

* Returns **non-zero (true)** if `c` is a decimal digit between `'0'` and `'9'`.
* Returns **0 (false)** otherwise, including when `c` is outside the ASCII range (0–127).

### Details

* The function first ensures that the input character `c` lies within the standard ASCII range. If not, it returns 0 immediately.
* It then checks if `c` falls within the ASCII values corresponding to digits `'0'` (48) through `'9'` (57).
* This implementation ensures predictable behavior even with invalid or extended ASCII inputs.

### Example Usage

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

## Versão em Português

### Protótipo da Função

```c
int ft_isdigit(int c);
```

### Descrição

`ft_isdigit` verifica se o caractere fornecido `c` é um dígito decimal (`'0'` a `'9'`).

### Parâmetros

* `int c`: Caractere a ser testado, passado como inteiro (geralmente um `unsigned char` convertido para `int` ou EOF).

### Valor de Retorno

* Retorna **diferente de zero (verdadeiro)** se `c` for um dígito decimal entre `'0'` e `'9'`.
* Retorna **0 (falso)** caso contrário, inclusive quando `c` estiver fora do intervalo ASCII (0–127).

### Detalhes

* A função verifica inicialmente se `c` pertence ao intervalo padrão da tabela ASCII. Se não pertencer, retorna 0.
* Em seguida, testa se `c` está entre os valores ASCII que representam os caracteres numéricos de `'0'` (48) a `'9'` (57).
* Essa abordagem garante um comportamento previsível mesmo com entradas inválidas ou fora do padrão ASCII.

### Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = '3';
    if (ft_isdigit(ch))
        printf("%c é um dígito.\n", ch);
    else
        printf("%c não é um dígito.\n", ch);
    return 0;
}
```

---
