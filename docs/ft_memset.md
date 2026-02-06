# ft_memset Documentation

### Function Prototype

```c
void *ft_memset(void *b, int c, size_t len);
```

---

### Description

`ft_memset` fills the first `len` bytes of the memory area pointed to by `b` with the constant byte `c`.

---

### Parameters

* `void *b`: Pointer to the memory area to be filled.
* `int c`: The byte value to set, passed as an `int` but converted to `unsigned char` internally.
* `size_t len`: Number of bytes to be set to the value `c`.

---

### Return Value

Returns the pointer `b` to the filled memory area.

---

### Details

The function casts the memory area pointer to `unsigned char *` and sets each byte to the value `c` in a loop until `len` bytes have been filled.
This implementation mimics the behavior of the standard C `memset` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char buffer[10] = "abcdefghi";
    ft_memset(buffer, 'X', 5);
    printf("Resulting string: %s\n", buffer);
    return 0;
}
```

---
