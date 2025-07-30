# ft\_putnbr\_fd Documentation

### Function Prototype / Protótipo da Função

```c
void ft_putnbr_fd(int n, int fd);
```

---

### Description / Descrição

`ft_putnbr_fd` writes the integer `n` to the file descriptor `fd` as a string of digits.

`ft_putnbr_fd` escreve o inteiro `n` no descritor de arquivo `fd` como uma sequência de dígitos.

---

### Parameters / Parâmetros

* `int n`: The integer to write.
* `int fd`: The file descriptor where the number will be written.

 

* `int n`: O inteiro a ser escrito.
* `int fd`: O descritor de arquivo onde o número será escrito.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function recursively breaks down the integer `n` into digits and writes each digit to the file descriptor `fd` using the `write` system call.
Handles the special case of the minimum 32-bit signed integer (`-2147483648`) explicitly.
If `n` is negative (other than the minimum), it writes a minus sign before the digits.

A função divide recursivamente o inteiro `n` em dígitos e escreve cada dígito no descritor de arquivo `fd` usando a chamada de sistema `write`.
Trata explicitamente o caso especial do menor inteiro com sinal de 32 bits (`-2147483648`).
Se `n` for negativo (exceto o mínimo), escreve um sinal de menos antes dos dígitos.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"

int main(void)
{
	ft_putnbr_fd(-12345, 1);
	return 0;
}
```

---
