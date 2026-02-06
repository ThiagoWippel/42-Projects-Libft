## ft_lstlast Documentation

### Function Prototype

```c
t_list *ft_lstlast(t_list *lst);
```

---

### Description

`ft_lstlast` returns the last element of the linked list `lst`.

---

### Parameters

* `t_list *lst`
  Pointer to the first element of the list.

---

### Return Value

Returns a pointer to the last element of the list, or `NULL` if the list is empty.

---

### Details

The function iterates through the list by following the `next` pointers until it reaches the last node, where `next` is `NULL`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    t_list *node1 = ft_lstnew("first");
    t_list *node2 = ft_lstnew("last");
    ft_lstadd_front(&node1, node2);

    t_list *last = ft_lstlast(node2);
    printf("Last content: %s\n", (char *)last->content);
    return 0;
}
```
