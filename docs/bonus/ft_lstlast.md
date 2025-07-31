# ft\_lstlast Documentation

### Function Prototype / Protótipo da Função

```c
t_list *ft_lstlast(t_list *lst);
```

---

### Description / Descrição

`ft_lstlast` returns the last element of the linked list `lst`.

`ft_lstlast` retorna o último elemento da lista encadeada `lst`.

---

### Parameters / Parâmetros

* `t_list *lst`: A pointer to the first element of the list.

 

* `t_list *lst`: Ponteiro para o primeiro elemento da lista.

---

### Return Value / Valor de Retorno

Returns a pointer to the last element of the list, or `NULL` if the list is empty.

Retorna um ponteiro para o último elemento da lista, ou `NULL` se a lista estiver vazia.

---

### Details / Detalhes

The function iterates through the list by following the `next` pointers until it finds the last node, where `next` is `NULL`.

A função percorre a lista seguindo os ponteiros `next` até encontrar o último nó, onde `next` é `NULL`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("last");
    ft_lstadd_front(&node1, node2);

    t_list *last = ft_lstlast(node2);
    printf("Last content: %s\n", (char *)last->content);
    return 0;
}
```

---
