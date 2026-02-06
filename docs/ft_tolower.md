# ft_tolower Documentation

### Function Prototype

```c
int ft_tolower(int c);
```

---

### Description

`ft_tolower` converts an uppercase alphabetic character to its lowercase equivalent, if such a conversion is possible.

---

### Parameters

* `int c`: The character to be converted, passed as an integer.

---

### Return Value

Returns the lowercase equivalent of `c` if it is an uppercase letter.
Otherwise, returns `c` unchanged.

---

### Details

This function only affects characters in the ASCII range `'A'` to `'Z'`.
The conversion is performed by adding `32` to the ASCII value of `c`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char upper = 'H';
	char lower = ft_tolower(upper);
	printf("Original: %c -> Lowercase: %c\n", upper, lower);
	return 0;
}
```

---
