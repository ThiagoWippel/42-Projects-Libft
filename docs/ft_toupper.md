# ft_toupper Documentation

### Function Prototype

```c
int ft_toupper(int c);
```

---

### Description

`ft_toupper` converts a lowercase alphabetic character to its uppercase equivalent, if such a conversion is possible.

---

### Parameters

* `int c`: The character to be converted, passed as an integer.

---

### Return Value

Returns the uppercase equivalent of `c` if it is a lowercase letter.
Otherwise, returns `c` unchanged.

---

### Details

This function only affects characters in the ASCII range `'a'` to `'z'`.
The conversion is performed by subtracting `32` from the ASCII value of `c`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	char lower = 'g';
	char upper = ft_toupper(lower);
	printf("Original: %c -> Uppercase: %c\n", lower, upper);
	return 0;
}
```

---
