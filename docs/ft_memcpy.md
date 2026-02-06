# ft_memcpy Documentation

### Function Prototype

```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```

---

### Description

`ft_memcpy` copies `n` bytes from the memory area pointed to by `src` to the memory area pointed to by `dest`. The memory areas must not overlap.

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

The function casts the source and destination pointers to `unsigned char *` and copies the bytes one by one in a loop.
If `n` is zero or if `dest` and `src` point to the same memory location, the function returns `dest` immediately.
This implementation mimics the behavior of the standard C `memcpy` function, which requires non-overlapping memory areas.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char src[] = "Hello World";
    char dest[20];

    ft_memcpy(dest, src, ft_strlen(src) + 1);
    printf("Copied string: %s\n", dest);

    return 0;
}
```

---
