# ft_strjoin Documentation

### Function Prototype

```c
char *ft_strjoin(char const *s1, char const *s2);
```

---

### Description

`ft_strjoin` allocates and returns a new string that is the result of concatenating `s1` and `s2`.

---

### Parameters

* `char const *s1`: The prefix string.
* `char const *s2`: The suffix string to be appended after `s1`.

---

### Return Value

Returns a pointer to the newly allocated string resulting from the concatenation.
Returns `NULL` if either `s1` or `s2` is `NULL`, or if memory allocation fails.

---

### Details

The function calculates the lengths of `s1` and `s2`, allocates enough memory to store both strings plus the null terminator, copies the contents of `s1` and `s2` sequentially using `ft_memcpy`, and ensures the resulting string is null-terminated.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *greeting = "Hello, ";
	char *name = "world!";
	char *message = ft_strjoin(greeting, name);
	if (message)
	{
		printf("%s\n", message);
		free(message);
	}
	else
	{
		printf("Allocation failed.\n");
	}
	return (0);
}
```

---
