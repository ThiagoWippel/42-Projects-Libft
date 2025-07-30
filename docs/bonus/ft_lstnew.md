# ft\_lstnew Documentation

### Function Prototype / Protótipo da Função

```c
t_list *ft_lstnew(void *content);
```

---

### Description / Descrição

`ft_lstnew` allocates and returns a new element of a singly linked list.
The `content` pointer is stored in the `content` field, and the `next` pointer is initialized to `NULL`.

`ft_lstnew` aloca e retorna um novo elemento de uma lista encadeada simples.
O ponteiro `content` é armazenado no campo `content`, e o ponteiro `next` é inicializado com `NULL`.

---

### Parameters / Parâmetros

* `void *content`: The content to store in the new list node.

 

* `void *content`: O conteúdo a ser armazenado no novo nó da lista.

---

### Return Value / Valor de Retorno

Returns a pointer to the newly created list node, or `NULL` if the allocation fails.

Retorna um ponteiro para o novo nó da lista criado, ou `NULL` se a alocação falhar.

---

### Details / Detalhes

The function uses `malloc` to allocate memory for a new `t_list` structure.
The `content` is not copied; only the pointer is stored, so care must be taken with memory management outside the function.

A função usa `malloc` para alocar memória para uma nova estrutura `t_list`.
O conteúdo não é copiado; apenas o ponteiro é armazenado, portanto, deve-se ter cuidado com o gerenciamento de memória fora da função.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int x = 42;
    t_list *node = ft_lstnew(&x);
    if (node)
        printf("Node content: %d\n", *(int *)node->content);
    return 0;
}
```

---
