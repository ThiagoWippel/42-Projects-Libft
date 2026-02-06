## ft_lstnew Documentation

### Function Prototype

```c
t_list *ft_lstnew(void *content);
```

---

### Description

`ft_lstnew` allocates and returns a new node for a singly linked list. The `content` pointer is assigned to the node's `content` field, and the `next` pointer is initialized to `NULL`.

---

### Parameters

* `void *content`: Pointer to the data to store in the new node.

---

### Return Value

Returns a pointer to the newly created list node, or `NULL` if memory allocation fails.

---

### Details

Memory for the node is allocated using `malloc`. The `content` is not duplicated; only the pointer is stored, so proper memory management of the content is the caller's responsibility.

---

### Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int x = 42;
    t_list *node = ft_lstnew(&x);
    if (node)
        printf("Node content: %d\n", *(int *)node->content);
    return 0;
}
```
