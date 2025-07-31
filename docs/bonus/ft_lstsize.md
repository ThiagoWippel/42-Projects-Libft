# ft\_lstsize Documentation

### Function Prototype / Protótipo da Função

```c
int ft_lstsize(t_list *lst);
```

---

### Description / Descrição

`ft_lstsize` counts the number of elements in the linked list `lst`.

`ft_lstsize` conta o número de elementos na lista encadeada `lst`.

---

### Parameters / Parâmetros

* `t_list *lst`: A pointer to the first element of the list.

 

* `t_list *lst`: Ponteiro para o primeiro elemento da lista.

---

### Return Value / Valor de Retorno

Returns the total number of elements in the list.

Retorna o número total de elementos na lista.

---

### Details / Detalhes

The function iterates through the list, incrementing a counter for each node until it reaches the end (`NULL`).

A função percorre a lista, incrementando um contador para cada nó até alcançar o fim (`NULL`).

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *node1 = ft_lstnew("A");
    t_list *node2 = ft_lstnew("B");
    ft_lstadd_front(&node1, node2);

    int size = ft_lstsize(node2);
    printf("List size: %d\n", size);
    return 0;
}
```

---
