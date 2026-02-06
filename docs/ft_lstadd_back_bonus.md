## ft_lstadd_back Documentation

### Function Prototype

```c
void ft_lstadd_back(t_list **lst, t_list *new);
```

---

### Description

`ft_lstadd_back` adds the element `new` to the end of the linked list pointed to by `lst`.

---

### Parameters

* `t_list **lst`
  Pointer to the pointer to the first element of the list.

* `t_list *new`
  The new element to be added at the end of the list.

---

### Return Value

None.

---

### Details

* If the list is empty (`*lst == NULL`), the new element becomes the first node.
* Otherwise, the function uses `ft_lstlast` to locate the last node and sets its `next` pointer to `new`.

---

### Example Usage

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
