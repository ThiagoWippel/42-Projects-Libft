# ft_substr Documentation

### Function Prototype

```c
char *ft_substr(char const *s, unsigned int start, size_t len);
```

---

### Description

`ft_substr` creates a new string that is a substring of the string `s`, starting at index `start` and with a maximum length of `len`.

---

### Parameters

* `char const *s`: The original null-terminated string.
* `unsigned int start`: The starting index from which to begin the substring.
* `size_t len`: The maximum length of the substring to extract.

---

### Return Value

Returns a pointer to the newly allocated substring.
Returns an empty string (`""`) if `start` is beyond the end of `s`.
Returns `NULL` if memory allocation fails or if `s` is `NULL`.

---

### Details

The function calculates the length of `s` and determines the actual number of characters to copy based on `start` and `len`.
It allocates memory for the substring plus a null terminator, copies the substring using `ft_memcpy`, and null-terminates it.
If `start` is greater than or equal to the length of `s`, an empty string allocated by `ft_strdup("")` is returned.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *text = "Hello, 42!";
	char *sub = ft_substr(text, 7, 2);
	if (sub)
	{
		printf("Substring: %s\n", sub);
		free(sub);
	}
	else
	{
		printf("Allocation failed.\n");
	}
	return 0;
}
```

---
