## ft_lstmap Documentation

### Function Prototype

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

---

### Description

`ft_lstmap` creates a new linked list by iterating over the input list `lst`, applying the function `f` to each node's content, and storing the results in newly allocated nodes. If a memory allocation fails, the `del` function is used to free the content of the already created nodes. The original list remains unchanged.

---

### Parameters

* `t_list *lst`: Pointer to the first node of the original list.
* `void *(*f)(void *)`: Function applied to the content of each node.
* `void (*del)(void *)`: Function to free the content of a node if allocation fails.

---

### Return Value

Returns a pointer to the first node of the newly created list. Returns `NULL` if a memory allocation fails.

---

### Details

All nodes of the new list are allocated dynamically. In case of allocation failure at any point, all previously allocated nodes are cleared using the `del` function to prevent memory leaks. The contents of the original list are not modified.

---

### Example

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

void *to_uppercase(void *content)
{
    char *str = (char *)content;
    char *upper = ft_strdup(str);
    for (int i = 0; upper[i]; i++)
        upper[i] = ft_toupper(upper[i]);
    return (upper);
}

void del_str(void *content)
{
    free(content);
}

int main(void)
{
    t_list *lst = ft_lstnew("abc");
    t_list *node2 = ft_lstnew("def");
    lst->next = node2;

    t_list *new_lst = ft_lstmap(lst, to_uppercase, del_str);
    ft_lstiter(new_lst, print_content);
    ft_lstclear(&new_lst, del_str);
    ft_lstclear(&lst, NULL);
    return 0;
}
```
