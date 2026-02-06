# ft_putchar_fd Documentation

### Function Prototype

```c
void ft_putchar_fd(char c, int fd);
```

---

### Description

`ft_putchar_fd` writes the character `c` to the given file descriptor `fd`.

---

### Parameters

* `char c`: The character to be written.
* `int fd`: The file descriptor on which the character will be written.

---

### Return Value

None.

---

### Details

This function is a thin wrapper around the `write` system call, writing exactly one byte.
It is commonly used to output characters to:

* Standard output (`fd = 1`)
* Standard error (`fd = 2`)

Its behavior matches the expected implementation for the **libft** project at 42.

---

### Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
```
---
