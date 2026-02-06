````md
# ft_putendl_fd Documentation

## Function Prototype

```c
void ft_putendl_fd(char *s, int fd);
````

---

## Description

`ft_putendl_fd` writes the string `s` to the file descriptor `fd`, followed by a newline character.

---

## Parameters

* `char *s`: The null-terminated string to write.
* `int fd`: The file descriptor where the string will be written.

---

## Return Value

None.

---

## Details

The function writes the entire string `s` to the file descriptor `fd` using the `write` system call.
After writing the string, it writes a newline character (`'\n'`).
If `s` is `NULL`, the function does nothing.

---

## Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, libft!", 1);
    return (0);
}
```

```
```
