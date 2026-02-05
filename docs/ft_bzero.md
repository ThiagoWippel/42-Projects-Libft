# ft_bzero Documentation

### Function Prototype

```c
void ft_bzero(void *str, size_t n);
```

---

### Description

`ft_bzero` sets the first `n` bytes of the memory area pointed to by `str` to zero.

---

### Parameters

* `void *str`: Pointer to the memory area to be zeroed.
* `size_t n`: Number of bytes to set to zero.

---

### Return Value

This function does not return a value.

---

### Details

The function uses `ft_memset` internally to fill the specified memory area with zero bytes.
This behavior mimics the standard C `bzero` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buffer[10] = "abcdefghi";
    ft_bzero(buffer, 5);
    printf("Buffer after ft_bzero: %s\n", buffer);
    return 0;
}
```

---
