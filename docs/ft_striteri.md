# ft_striteri Documentation

### Function Prototype

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *));
```

---

### Description

`ft_striteri` applies the function `f` to each character of the string `s`, passing the character’s index and a pointer to the character itself. The original string is modified in place.

---

### Parameters

* `char *s`: The string to iterate through.
* `void (*f)(unsigned int, char *)`: The function to apply to each character.

---

### Return Value

None.

---

### Details

The function `f` is called for each character in the string `s` and is allowed to modify the character via its pointer.
The index of the character is passed as the first argument.
If either `s` or `f` is `NULL`, the function does nothing.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

void to_upper_even(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
}

int main(void)
{
	char str[] = "libft42";
	ft_striteri(str, to_upper_even);
	printf("Modified string: %s\n", str);
	return (0);
}
```

---
