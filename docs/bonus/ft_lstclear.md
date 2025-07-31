# ft\_lstclear Documentation

### Function Prototype / Protótipo da Função

```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```

---

### Description / Descrição

`ft_lstclear` deletes and frees all nodes of the list pointed to by `lst`, using the function `del` to free the content of each node. After the operation, the pointer `*lst` is set to `NULL`.

`ft_lstclear` deleta e libera todos os nós da lista apontada por `lst`, usando a função `del` para liberar o conteúdo de cada nó. Após a operação, o ponteiro `*lst` é definido como `NULL`.

---

### Parameters / Parâmetros

* `t_list **lst`: A pointer to the first node of the list to be cleared.
* `void (*del)(void *)`: A function pointer used to delete the content of each node.

 

* `t_list **lst`: Um ponteiro para o primeiro nó da lista a ser liberada.
* `void (*del)(void *)`: Um ponteiro para função usada para liberar o conteúdo de cada nó.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function iteratively deletes each node using `ft_lstdelone`.
After execution, `*lst` is guaranteed to be `NULL`.
If either parameter is `NULL`, nothing is done.

A função deleta iterativamente cada nó usando `ft_lstdelone`.
Após a execução, `*lst` estará garantidamente definido como `NULL`.
Se qualquer parâmetro for `NULL`, nada será feito.

---

### Example Usage / Exemplo de Uso

```c
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *n1 = ft_lstnew(malloc(10));
	t_list *n2 = ft_lstnew(malloc(10));
	t_list *n3 = ft_lstnew(malloc(10));
	n1->next = n2;
	n2->next = n3;

	ft_lstclear(&n1, del_content);

	if (n1 == NULL)
		printf("List cleared successfully.\n");
	return (0);
}
```

---
