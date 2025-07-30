# ft\_itoa Documentation

### Function Prototype / Protótipo da Função

```c
char *ft_itoa(int n);
```

---

### Description / Descrição

`ft_itoa` converts the integer `n` into a newly allocated null-terminated string representing its decimal value.

`ft_itoa` converte o inteiro `n` em uma nova string terminada em nulo representando seu valor decimal.

---

### Parameters / Parâmetros

* `int n`: The integer to convert.

 

* `int n`: O inteiro a ser convertido.

---

### Return Value / Valor de Retorno

A pointer to the newly allocated string representing the number, or `NULL` if memory allocation fails.

Um ponteiro para a nova string alocada representando o número, ou `NULL` se a alocação de memória falhar.

---

### Details / Detalhes

Allocates memory dynamically for the string representation of `n`, including the sign if negative.
Handles the special case of `INT_MIN` safely by using `long` to prevent overflow.
Uses a helper function `count_digits` to determine the exact amount of space needed.

Aloca memória dinamicamente para a representação em string de `n`, incluindo o sinal se for negativo.
Lida com o caso especial de `INT_MIN` de forma segura utilizando `long` para evitar overflow.
Usa a função auxiliar `count_digits` para determinar a quantidade exata de espaço necessário.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = ft_itoa(-42);
	printf("%s\n", str);
	free(str);
	return 0;
}
```

---
