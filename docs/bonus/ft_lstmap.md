# ft\_lstmap Documentation

### Function Prototype / Protótipo da Função

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

---

### Description / Descrição

`ft_lstmap` iterates over the list `lst`, applies the function `f` to the content of each node, and creates a new list resulting from the successive applications of `f`. The `del` function is used to delete the content of a node in case of allocation failure.

`ft_lstmap` itera sobre a lista `lst`, aplica a função `f` ao conteúdo de cada nó e cria uma nova lista resultante das sucessivas aplicações de `f`. A função `del` é usada para liberar o conteúdo de um nó em caso de falha de alocação.

---

### Parameters / Parâmetros

* `t_list *lst`: The original list to iterate.
* `void *(*f)(void *)`: Function to apply to each node's content.
* `void (*del)(void *)`: Function to delete the content of a node if necessary.

 

* `t_list *lst`: A lista original a ser iterada.
* `void *(*f)(void *)`: Função aplicada ao conteúdo de cada nó.
* `void (*del)(void *)`: Função usada para liberar o conteúdo de um nó, se necessário.

---

### Return Value / Valor de Retorno

A pointer to the first node of the new list, or `NULL` if an allocation fails.

Um ponteiro para o primeiro nó da nova lista, ou `NULL` se houver falha de alocação.

---

### Details / Detalhes

If a memory allocation fails during the process, all already allocated nodes of the new list are properly freed using `del`.
Neither the original list nor its contents are modified.

Se ocorrer falha de alocação de memória durante o processo, todos os nós já alocados da nova lista são liberados corretamente usando `del`.
Nem a lista original nem seu conteúdo são modificados.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *upper = ft_strdup(str);
    for (int i = 0; upper[i]; i++)
        upper[i] = ft_toupper(upper[i]);
    return (upper);
}

void del_str(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = ft_lstnew("abc");
    t_list *node2 = ft_lstnew("def");
    lst->next = node2;

    t_list *new_lst = ft_lstmap(lst, to_uppercase, del_str);
    ft_lstiter(new_lst, print_content);
    ft_lstclear(&new_lst, del_str);
    ft_lstclear(&lst, NULL);
    return 0;
}
```

---
