# ft_strmapi Documentation

### Function Prototype

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

---

### Description

`ft_strmapi` applies the function `f` to each character of the string `s`, passing its index as the first argument, and creates a new string resulting from successive applications of `f`.

---

### Parameters

* `char const *s`: The string to be mapped.
* `char (*f)(unsigned int, char)`: The function to apply to each character.

---

### Return Value

Returns a new string resulting from applying `f` to each character of `s`, or `NULL` if memory allocation fails.

---

### Details

Each character in the original string `s` is transformed by the function `f`, which receives the character index and its value.
The function does not modify the original string and allocates a new one.
Returns `NULL` if `s` or `f` is `NULL`, or if memory allocation fails.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

char to_upper_if_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *result = ft_strmapi("libft", to_upper_if_even);
	if (result)
	{
		printf("Mapped string: %s\n", result);
		free(result);
	}
	else
	{
		printf("Mapping failed.\n");
	}
	return 0;
}
```

---
