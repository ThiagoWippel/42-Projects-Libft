# ft_putnbr_fd Documentation

### Function Prototype

```c
void ft_putnbr_fd(int n, int fd);
```

---

### Description

`ft_putnbr_fd` writes the integer `n` to the file descriptor `fd` as a sequence of digits.

---

### Parameters

* `int n`: The integer to write.
* `int fd`: The file descriptor where the number will be written.

---

### Return Value

None.

---

### Details

The function recursively breaks down the integer `n` into individual digits and writes each digit to the file descriptor `fd` using the `write` system call.
It explicitly handles the special case of the minimum 32-bit signed integer (`-2147483648`).
If `n` is negative (except for the minimum value), a minus sign is written before the digits.

---

### Example Usage

```c
#include "libft.h"

int main(void)
{
    ft_putnbr_fd(-12345, 1);
    return (0);
}
```

---
