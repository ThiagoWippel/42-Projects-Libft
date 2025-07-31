# ft\_lstiter Documentation

### Function Prototype / Protótipo da Função

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

---

### Description / Descrição

`ft_lstiter` iterates over the list `lst` and applies the function `f` to the content of each node.

`ft_lstiter` itera sobre a lista `lst` e aplica a função `f` ao conteúdo de cada nó.

---

### Parameters / Parâmetros

* `t_list *lst`: The first node of the list to iterate over.
* `void (*f)(void *)`: A function pointer applied to the content of each node.

 

* `t_list *lst`: O primeiro nó da lista a ser iterada.
* `void (*f)(void *)`: Um ponteiro para função aplicada ao conteúdo de cada nó.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function traverses the entire list, calling `f` on each node's content.
If `lst` or `f` is `NULL`, the function does nothing.

A função percorre toda a lista, chamando `f` no conteúdo de cada nó.
Se `lst` ou `f` forem `NULL`, a função não faz nada.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    node1->next = node2;

    ft_lstiter(node1, print_content);
    return 0;
}
```

---
