# ft_putstr_fd Documentation

### Function Prototype

```c
void ft_putstr_fd(char *s, int fd);
```

---

### Description

`ft_putstr_fd` writes the string `s` to the file descriptor `fd`.

---

### Parameters

* `char *s`: The null-terminated string to write.
* `int fd`: The file descriptor where the string will be written.

---

### Return Value

None.

---

### Details

The function writes the entire string `s` to the file descriptor `fd` using the `write` system call.
If `s` is `NULL`, the function does nothing.

---

### Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, libft!\n", 1);
    return (0);
}
```

---
