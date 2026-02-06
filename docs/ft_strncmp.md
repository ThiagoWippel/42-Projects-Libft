# ft_strncmp Documentation

### Function Prototype

```c
int ft_strncmp(const char *str1, const char *str2, size_t n);
```

---

### Description

`ft_strncmp` compares up to `n` characters of the strings `str1` and `str2`.
The comparison is performed using unsigned characters and stops at the first differing character or when `n` characters have been compared.

---

### Parameters

* `const char *str1`: First string to be compared.
* `const char *str2`: Second string to be compared.
* `size_t n`: Maximum number of characters to compare.

---

### Return Value

Returns the difference between the first pair of differing characters, cast to `unsigned char`.
Returns `0` if the strings are equal in the first `n` characters.

---

### Details

The function safely handles null-terminated strings.
If either string ends before `n` characters, the comparison stops at the null terminator.
This function is useful for partial string comparisons or lexicographic ordering.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	int result = ft_strncmp("banana", "bandana", 3);
	if (result == 0)
		printf("First 3 characters are equal.\n");
	else
		printf("First 3 characters are different.\n");
	return 0;
}
```

---
