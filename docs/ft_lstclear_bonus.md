## ft_lstclear Documentation

### Function Prototype

```c
void ft_lstclear(t_list **lst, void (*del)(void *));
```

---

### Description

`ft_lstclear` deletes and frees all nodes of the linked list pointed to by `lst`, using the function `del` to free the content of each node. After the operation, the pointer `*lst` is set to `NULL`.

---

### Parameters

* `t_list **lst`
  Pointer to the pointer to the first node of the list to be cleared.

* `void (*del)(void *)`
  Function pointer used to delete the content of each node.

---

### Return Value

None.

---

### Details

* The function iteratively deletes each node using `ft_lstdelone`.
* After execution, `*lst` is guaranteed to be set to `NULL`.
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
