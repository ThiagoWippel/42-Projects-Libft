## ft_lstiter Documentation

### Function Prototype

```c
void ft_lstiter(t_list *lst, void (*f)(void *));
```

---

### Description

`ft_lstiter` iterates over the list `lst` and applies the function `f` to the content of each node.

---

### Parameters

* `t_list *lst`
  The first node of the list to iterate over.

* `void (*f)(void *)`
  Function pointer applied to the content of each node.

---

### Return Value

None.

---

### Details

* The function traverses the entire list, calling `f` on the content of each node.
* If either `lst` or `f` is `NULL`, the function does nothing.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

void print_content(void *content)
{
    printf("%s\n", (char *)content);
}

int main(void)
{
    t_list *node1 = ft_lstnew("Node 1");
    t_list *node2 = ft_lstnew("Node 2");
    node1->next = node2;

    ft_lstiter(node1, print_content);
    return 0;
}
```
