# ft_strlcpy Documentation

### Function Prototype

```c
size_t ft_strlcpy(char *dest, const char *src, size_t size);
```

---

### Description

`ft_strlcpy` copies up to `size - 1` characters from the null-terminated string `src` to `dest`, null-terminating the result if `size` is not zero.

---

### Parameters

* `char *dest`: Destination buffer where the string will be copied.
* `const char *src`: Source string to be copied.
* `size_t size`: Total size of the destination buffer.

---

### Return Value

Returns the total length of the source string `src`.

---

### Details

The function guarantees that the destination string is null-terminated as long as `size` is greater than zero.
It does not pad the remaining space in `dest` with null bytes.
This implementation mimics the behavior of the BSD `strlcpy` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char buffer[10];
	size_t len = ft_strlcpy(buffer, "42SP", sizeof(buffer));
	printf("Copied string: %s (Length: %zu)\n", buffer, len);
	return (0);
}
```

---
