## ft_lstsize Documentation

### Function Prototype

```c
int ft_lstsize(t_list *lst);
```

---

### Description

`ft_lstsize` returns the number of nodes in the linked list `lst`.

---

### Parameters

* `t_list *lst`: Pointer to the first node of the list.

---

### Return Value

Returns the total count of nodes in the list.

---

### Details

The function traverses the list from the first node to the end (`NULL`), incrementing a counter for each node encountered.

---

### Example

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *node1 = ft_lstnew("A");
    t_list *node2 = ft_lstnew("B");
    ft_lstadd_front(&node1, node2);

    int size = ft_lstsize(node2);
    printf("List size: %d\n", size);
    return 0;
}
```
---
