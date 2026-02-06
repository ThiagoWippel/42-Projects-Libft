# ft_memcmp Documentation

### Function Prototype

```c
int ft_memcmp(const void *str1, const void *str2, size_t n);
```

---

### Description

`ft_memcmp` compares the first `n` bytes of the memory areas pointed to by `str1` and `str2`.
The comparison is performed byte by byte using `unsigned char` values.

---

### Parameters

* `const void *str1`: Pointer to the first memory area.
* `const void *str2`: Pointer to the second memory area.
* `size_t n`: Number of bytes to compare.

---

### Return Value

Returns an integer less than, equal to, or greater than zero if the first differing byte in `str1` is found to be less than, equal to, or greater than the corresponding byte in `str2`.
Returns `0` if all compared bytes are equal.

---

### Details

The function stops comparing as soon as a difference is found or after `n` bytes have been checked.
It is useful for comparing binary data where null terminators are not considered.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char data1[] = {1, 2, 3, 4, 5};
    char data2[] = {1, 2, 4, 4, 5};
    int result = ft_memcmp(data1, data2, 5);

    if (result == 0)
        printf("Memory areas are equal.\n");
    else
        printf("Memory areas differ.\n");

    return 0;
}
```

---
