# ft_strlcat Documentation

### Function Prototype

```c
size_t ft_strlcat(char *dest, const char *src, size_t size);
```

---

### Description

`ft_strlcat` appends the null-terminated string `src` to the end of `dest`. It appends at most `size - strlen(dest) - 1` bytes and always null-terminates the result if `size` is greater than the initial length of `dest`.

---

### Parameters

* `char *dest`: Destination string to which `src` will be appended.
* `const char *src`: Source string to append to `dest`.
* `size_t size`: Total size of the destination buffer, including the null terminator.

---

### Return Value

Returns the initial length of `dest` plus the length of `src`.
If the return value is greater than or equal to `size`, truncation occurred.

---

### Details

If `size` is less than or equal to the length of `dest`, the function returns `size + strlen(src)` without appending anything.
Otherwise, it appends as much of `src` as possible while respecting the buffer size and ensures the resulting string is null-terminated.
This function mimics the behavior of the BSD `strlcat` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char buffer[20] = "Hello, ";
	size_t result = ft_strlcat(buffer, "world!", sizeof(buffer));
	printf("Result: %s (Total length: %zu)\n", buffer, result);
	return (0);
}
```

---
