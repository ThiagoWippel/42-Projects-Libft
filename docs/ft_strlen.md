# ft_strlen Documentation

### Function Prototype

```c
size_t ft_strlen(const char *str);
```

---

### Description

`ft_strlen` calculates the length of the null-terminated string `str`, excluding the terminating null byte (`'\0'`).

---

### Parameters

* `const char *str`: Pointer to the null-terminated string whose length is to be calculated.

---

### Return Value

Returns the number of characters in the string `str` before the terminating null byte.

---

### Details

The function iterates through the string until it encounters the null byte, incrementing a counter at each step.
This implementation matches the behavior of the standard C `strlen` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, World!";
    printf("Length of '%s' is %zu.\n", str, ft_strlen(str));
    return 0;
}
```

---
