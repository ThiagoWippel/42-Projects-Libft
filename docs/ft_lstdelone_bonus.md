## ft_lstdelone Documentation

### Function Prototype

```c
void ft_lstdelone(t_list *lst, void (*del)(void *));
```

---

### Description

`ft_lstdelone` deletes the node `lst` by calling the function `del` to free its content, then frees the node itself.

---

### Parameters

* `t_list *lst`
  The node to be deleted.

* `void (*del)(void *)`
  Function pointer used to delete the content of the node.

---

### Return Value

None.

---

### Details

* This function only frees the given node; it does not affect any subsequent nodes.
* It assumes that the `del` function correctly handles the node’s content.
* If either `lst` or `del` is `NULL`, the function does nothing.

---

### Example Usage

```c
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void del_content(void *content)
{
	free(content);
}

int main(void)
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
