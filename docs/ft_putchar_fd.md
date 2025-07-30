# ft\_putchar\_fd Documentation

### Function Prototype / Protótipo da Função

```c
void ft_putchar_fd(char c, int fd);
```

---

### Description / Descrição

`ft_putchar_fd` writes the character `c` to the file descriptor `fd`.

`ft_putchar_fd` escreve o caractere `c` no descritor de arquivo `fd`.

---

### Parameters / Parâmetros

* `char c`: The character to write.
* `int fd`: The file descriptor where the character will be written.

 

* `char c`: O caractere a ser escrito.
* `int fd`: O descritor de arquivo onde o caractere será escrito.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

This function is a simple wrapper for the `write` system call. It is commonly used to print a single character to standard output (`fd = 1`) or standard error (`fd = 2`).

Esta função é um encapsulamento simples da chamada de sistema `write`. É comumente usada para imprimir um único caractere na saída padrão (`fd = 1`) ou na saída de erro padrão (`fd = 2`).

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"

int	main(void)
{
	ft_putchar_fd('A', 1);
	return (0);
}
```

---
