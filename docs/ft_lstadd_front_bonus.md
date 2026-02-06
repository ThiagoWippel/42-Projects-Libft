## ft_lstadd_front Documentation

### Function Prototype

```c
void ft_lstadd_front(t_list **lst, t_list *new);
```

---

### Description

`ft_lstadd_front` adds the element `new` at the beginning of the linked list pointed to by `lst`.

---

### Parameters

* `t_list **lst`
  Pointer to the pointer to the first element of the list.

* `t_list *new`
  The new element to be added at the front of the list.

---

### Return Value

None.

---

### Details

* If either `lst` or `new` is `NULL`, the function does nothing.
* Otherwise, the `next` pointer of `new` is set to the current first element of the list, and `lst` is updated to point to `new`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *head = NULL;
	int value = 1;
	t_list *node = ft_lstnew(&value);

	ft_lstadd_front(&head, node);

	if (head)
		printf("First element content: %d\n", *(int *)head->content);
	return 0;
}
```
