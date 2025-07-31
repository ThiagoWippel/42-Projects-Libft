# ft\_lstadd\_back Documentation

### Function Prototype / Protótipo da Função

```c
void ft_lstadd_back(t_list **lst, t_list *new);
```

---

### Description / Descrição

`ft_lstadd_back` adds the element `new` at the end of the linked list pointed to by `lst`.

`ft_lstadd_back` adiciona o elemento `new` ao final da lista encadeada apontada por `lst`.

---

### Parameters / Parâmetros

* `t_list **lst`: A pointer to the pointer to the first element of the list.
* `t_list *new`: The new element to be added to the end of the list.

 

* `t_list **lst`: Um ponteiro para o ponteiro do primeiro elemento da lista.
* `t_list *new`: O novo elemento a ser adicionado ao final da lista.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

If the list is empty (`*lst` is `NULL`), the new element becomes the first node.
Otherwise, the function uses `ft_lstlast` to find the last node and links its `next` to `new`.

Se a lista estiver vazia (`*lst` for `NULL`), o novo elemento se torna o primeiro nó.
Caso contrário, a função utiliza `ft_lstlast` para encontrar o último nó e conecta seu `next` a `new`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *head = ft_lstnew("first");
    t_list *second = ft_lstnew("second");
    ft_lstadd_back(&head, second);

    t_list *last = ft_lstlast(head);
    printf("Last node content: %s\n", (char *)last->content);
    return 0;
}
```

---
