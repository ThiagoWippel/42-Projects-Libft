# ft\_lstadd\_front Documentation

### Function Prototype / Protótipo da Função

```c
void ft_lstadd_front(t_list **lst, t_list *new);
```

---

### Description / Descrição

`ft_lstadd_front` adds the element `new` at the beginning of the list pointed to by `lst`.

`ft_lstadd_front` adiciona o elemento `new` no início da lista apontada por `lst`.

---

### Parameters / Parâmetros

* `t_list **lst`: A pointer to the pointer to the first element of the list.

 

* `t_list **lst`: Ponteiro para o ponteiro do primeiro elemento da lista.

* `t_list *new`: The new element to add at the front of the list.

 

* `t_list *new`: O novo elemento a ser adicionado no início da lista.

---

### Return Value / Valor de Retorno

This function does not return a value.

Esta função não retorna nenhum valor.

---

### Details / Detalhes

If either `lst` or `new` is `NULL`, the function does nothing.
Otherwise, it sets the `next` pointer of `new` to the current first element of the list, then updates `lst` to point to `new`.

Se `lst` ou `new` for `NULL`, a função não realiza nenhuma operação.
Caso contrário, define o ponteiro `next` de `new` para o primeiro elemento atual da lista e atualiza `lst` para apontar para `new`.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *head = NULL;
    int a = 1;
    t_list *node = ft_lstnew(&a);
    ft_lstadd_front(&head, node);
    if (head)
        printf("First element content: %d\n", *(int *)head->content);
    return 0;
}
```

---
