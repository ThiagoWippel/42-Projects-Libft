# ft\_atoi Documentation

### Function Prototype / Protótipo da Função

```c
int ft_atoi(const char *str);
```

---

### Description / Descrição

`ft_atoi` converts the initial portion of the string `str` to an integer.
It skips leading whitespace characters, handles an optional plus or minus sign, and converts consecutive numeric digits until a non-digit is encountered.

`ft_atoi` converte a parte inicial da string `str` para um inteiro.
Ela ignora espaços em branco iniciais, trata um sinal opcional de mais ou menos e converte os dígitos numéricos consecutivos até encontrar um caractere não numérico.

---

### Parameters / Parâmetros

* `const char *str`: The null-terminated string to be converted to an integer.

 

* `const char *str`: A string terminada em nulo a ser convertida para inteiro.

---

### Return Value / Valor de Retorno

Returns the integer value represented by the initial portion of `str` interpreted as a decimal number, including sign.

Retorna o valor inteiro representado pela parte inicial de `str`, interpretado como número decimal, incluindo o sinal.

---

### Details / Detalhes

The function recognizes and skips whitespace characters (spaces and ASCII control characters 7 to 13).
It handles optional `+` or `-` signs to determine the result's sign.
Parsing stops when the first non-digit character is encountered.
This implementation does not handle overflow or errors.

A função reconhece e ignora caracteres de espaço em branco (espaços e caracteres ASCII de controle 7 a 13).
Trata sinais opcionais `+` ou `-` para determinar o sinal do resultado.
A conversão para ao encontrar o primeiro caractere não numérico.
Esta implementação não trata overflow ou erros.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "   -1234abc";
    int num = ft_atoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}
```

---
