# ft_memchr Documentation

### Function Prototype

```c
void *ft_memchr(const void *str, int c, size_t n);
```

---

### Description

`ft_memchr` searches for the first occurrence of the byte `c` in the first `n` bytes of the memory area pointed to by `str`.

---

### Parameters

* `const void *str`: Pointer to the memory area to be searched.
* `int c`: The byte value to search for, converted to an unsigned char.
* `size_t n`: Number of bytes to examine.

---

### Return Value

Returns a pointer to the first occurrence of the byte `c` within the memory area.
Returns `NULL` if the byte is not found within the first `n` bytes.

---

### Details

The function scans the memory byte by byte up to `n` bytes.
The comparison is performed using an unsigned char cast of `c`.
This implementation mimics the behavior of the standard C `memchr` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char data[] = "Hello world";
    char *result = ft_memchr(data, 'w', sizeof(data));

    if (result)
        printf("Character found: %c\n", *result);
    else
        printf("Character not found.\n");

    return 0;
}
```

---
