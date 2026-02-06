# ft_itoa Documentation

### Function Prototype

```c
char *ft_itoa(int n);
```

---

### Description

`ft_itoa` converts the integer `n` into a newly allocated null-terminated string representing its decimal value.

---

### Parameters

* `int n`: The integer to convert.

---

### Return Value

Returns a pointer to the newly allocated string representing the number, or `NULL` if memory allocation fails.

---

### Details

The function dynamically allocates memory for the string representation of `n`, including the sign if the number is negative.
It safely handles the special case of `INT_MIN` by using a `long` type to avoid overflow.
A helper function, `count_digits`, is used to determine the exact amount of memory required for the conversion.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = ft_itoa(-42);
    printf("%s\n", str);
    free(str);
    return 0;
}
```

---
