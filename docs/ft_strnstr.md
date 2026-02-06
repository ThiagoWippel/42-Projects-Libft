# ft_strnstr Documentation

### Function Prototype

```c
char *ft_strnstr(const char *big, const char *little, size_t len);
```

---

### Description

`ft_strnstr` locates the first occurrence of the null-terminated string `little` within the first `len` characters of the string `big`.

---

### Parameters

* `const char *big`: The string to be searched.
* `const char *little`: The substring to search for.
* `size_t len`: The maximum number of characters to search within `big`.

---

### Return Value

Returns a pointer to the first occurrence of `little` within `big` (within the first `len` characters).
Returns `NULL` if `little` is not found within the first `len` characters.
If `little` is an empty string, returns `big`.

---

### Details

The function performs a bounded search, ensuring it does not access memory beyond `len` characters of `big`.
Characters are compared one by one until a full match of `little` is found or the length limit is reached.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char *text = "Hello 42 São Paulo";
	char *found = ft_strnstr(text, "42", 10);
	if (found)
		printf("Substring found: %s\n", found);
	else
		printf("Substring not found within limit.\n");
	return 0;
}
```

---
