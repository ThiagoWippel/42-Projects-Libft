# ft_strtrim Documentation

### Function Prototype

```c
char *ft_strtrim(char const *s1, char const *set);
```

---

### Description

`ft_strtrim` allocates and returns a copy of `s1` with the characters specified in `set` removed from the beginning and the end of the string.

---

### Parameters

* `char const *s1`: The string to be trimmed.
* `char const *set`: The set of characters to remove from `s1`.

---

### Return Value

Returns a pointer to the trimmed string.
Returns `NULL` if memory allocation fails or if `s1` or `set` is `NULL`.

---

### Details

The function skips characters from the start and the end of `s1` that are present in `set`, calculates the new length, allocates memory accordingly, and copies the trimmed portion using `ft_memcpy`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *str = "  \t\nHello, world! \n\t ";
	char *trimmed = ft_strtrim(str, " \n\t");
	if (trimmed)
	{
		printf("Trimmed: '%s'\n", trimmed);
		free(trimmed);
	}
	else
	{
		printf("Failed to allocate memory.\n");
	}
	return 0;
}
```

---
