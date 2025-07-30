# ft\_putendl\_fd Documentation

### Function Prototype / Protótipo da Função

```c
void ft_putendl_fd(char *s, int fd);
```

---

### Description / Descrição

`ft_putendl_fd` writes the string `s` to the file descriptor `fd`, followed by a newline character.

`ft_putendl_fd` escreve a string `s` no descritor de arquivo `fd`, seguida de um caractere de nova linha.

---

### Parameters / Parâmetros

* `char *s`: The null-terminated string to write.
* `int fd`: The file descriptor where the string will be written.

 

* `char *s`: A string terminada em nulo a ser escrita.
* `int fd`: O descritor de arquivo onde a string será escrita.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function writes each character of the string `s` one by one to the file descriptor `fd` using the `write` system call.
After writing the string, it writes a newline character (`'\n'`).
If `s` is `NULL`, the function does nothing.

A função escreve cada caractere da string `s` um a um no descritor de arquivo `fd` usando a chamada de sistema `write`.
Após escrever a string, escreve um caractere de nova linha (`'\n'`).
Se `s` for `NULL`, a função não faz nada.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"

int main(void)
{
	ft_putendl_fd("Hello, libft!", 1);
	return 0;
}
```

---
