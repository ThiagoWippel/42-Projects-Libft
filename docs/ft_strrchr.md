# ft_strrchr Documentation

### Function Prototype

```c
char *ft_strrchr(const char *str, int c);
```

---

### Description

`ft_strrchr` locates the **last** occurrence of the character `c` in the null-terminated string `str`.

---

### Parameters

* `const char *str`: The string in which to search for the character.
* `int c`: The character to locate, passed as an `int` but interpreted as an `unsigned char`.

---

### Return Value

Returns a pointer to the **last** occurrence of `c` in `str`, or `NULL` if `c` is not found.
If `c` is `'\0'`, a pointer to the null terminator is returned.

---

### Details

The function starts scanning from the end of the string and moves backward until a match is found.
It correctly treats the null terminator `'\0'` as a valid searchable character.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char *text = "banana";
	char *ptr = ft_strrchr(text, 'a');
	if (ptr)
		printf("Last occurrence found at: %s\n", ptr);
	else
		printf("Character not found.\n");
	return 0;
}
```

---
