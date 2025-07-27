# ft\_isalpha Documentation

## English Version

### Function Prototype

```c
int ft_isalpha(int c);
```

### Description

`ft_isalpha` checks whether the given character `c` is an alphabetic letter (either uppercase or lowercase).

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or EOF).

### Return Value

* Returns **non-zero (true)** if `c` is an uppercase (`'A'` to `'Z'`) or lowercase (`'a'` to `'z'`) alphabetic character.
* Returns **0 (false)** otherwise, including when `c` is outside the ASCII range (0–127).

### Details

* This function first verifies that the input character `c` is within the ASCII range. If not, it returns 0 immediately.
* It then tests whether `c` falls within the ranges of uppercase or lowercase alphabetic ASCII codes.
* The function behavior mimics the standard C library function `isalpha` but ensures safety by rejecting out-of-range inputs.

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = 'G';
    if (ft_isalpha(ch))
        printf("%c is an alphabetic character.\n", ch);
    else
        printf("%c is not an alphabetic character.\n", ch);
    return 0;
}
```

---

## Versão em Português

### Protótipo da Função

```c
int ft_isalpha(int c);
```

### Descrição

A função `ft_isalpha` verifica se o caractere `c` fornecido é uma letra do alfabeto (maiúscula ou minúscula).

### Parâmetros

* `int c`: O caractere a ser testado, passado como inteiro (normalmente um `unsigned char` convertido para `int` ou EOF).

### Valor de Retorno

* Retorna **valor diferente de zero (verdadeiro)** se `c` for uma letra maiúscula (`'A'` a `'Z'`) ou minúscula (`'a'` a `'z'`).
* Retorna **0 (falso)** caso contrário, inclusive se `c` estiver fora do intervalo ASCII (0–127).

### Detalhes

* A função primeiro verifica se o caractere está dentro do intervalo ASCII válido. Caso contrário, retorna 0 imediatamente.
* Em seguida, verifica se `c` está dentro dos intervalos de letras maiúsculas ou minúsculas na tabela ASCII.
* O comportamento é similar à função padrão da biblioteca C `isalpha`, mas garantindo segurança ao rejeitar entradas fora do intervalo ASCII.

### Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = 'G';
    if (ft_isalpha(ch))
        printf("%c é um caractere alfabético.\n", ch);
    else
        printf("%c não é um caractere alfabético.\n", ch);
    return 0;
}
```
