# ft_memmove Documentation

### Function Prototype

```c
void *ft_memmove(void *dest, const void *src, size_t n);
```

---

### Description

`ft_memmove` copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`. The memory areas may overlap.

---

### Parameters

* `void *dest`: Pointer to the destination memory area where the bytes will be copied.
* `const void *src`: Pointer to the source memory area from which the bytes will be copied.
* `size_t n`: Number of bytes to copy.

---

### Return Value

Returns a pointer to the destination memory area `dest`.

---

### Details

The function detects whether the source and destination memory areas overlap and copies the bytes in a safe manner to prevent data corruption.
If `dest` points to a higher memory address than `src`, copying is performed backwards; otherwise, copying is performed forwards.
This implementation mimics the behavior of the standard C `memmove` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[] = "Hello World";
    ft_memmove(buffer + 6, buffer, 5);
    printf("Resulting string: %s\n", buffer);
    return 0;
}
```

---
