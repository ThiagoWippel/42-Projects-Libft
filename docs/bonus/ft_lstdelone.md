---

# ft\_lstdelone Documentation

### Function Prototype / Protótipo da Função

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

---

### Description / Descrição

`ft_lstdelone` deletes the element `lst` by using the function `del` to free its content, then frees the node itself.

`ft_lstdelone` deleta o elemento `lst` usando a função `del` para liberar seu conteúdo e, em seguida, libera o próprio nó.

---

### Parameters / Parâmetros

* `t_list *lst`: The node to be deleted.
* `void (*del)(void *)`: A function pointer used to delete the content of the node.

 

* `t_list *lst`: O nó a ser deletado.
* `void (*del)(void *)`: Um ponteiro para função usada para liberar o conteúdo do nó.

---

### Return Value / Valor de Retorno

None.

Nenhum.

---

### Details / Detalhes

The function does not free the memory of subsequent nodes.
It only deals with the given node and assumes the `del` function properly handles its content.
Passing `NULL` to either parameter has no effect.

A função não libera a memória dos nós seguintes.
Ela trata apenas do nó fornecido e assume que a função `del` lida corretamente com seu conteúdo.
Passar `NULL` para qualquer um dos parâmetros não tem efeito.

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
	t_list *node = ft_lstnew(malloc(10));
	if (!node)
		return (1);
	ft_lstdelone(node, del_content);
	printf("Node deleted successfully.\n");
	return (0);
}
```

---
