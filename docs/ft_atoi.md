# ft_atoi Documentation

### Function Prototype

```c
int ft_atoi(const char *str);
```

---

### Description

`ft_atoi` converts the initial portion of the string `str` to an integer.
It skips leading whitespace characters, handles an optional plus or minus sign, and converts consecutive numeric digits until a non-digit character is encountered.

---

### Parameters

* `const char *str`: The null-terminated string to be converted to an integer.

---

### Return Value

Returns the integer value represented by the initial portion of `str`, interpreted as a decimal number and including the sign.

---

### Details

The function recognizes and skips whitespace characters (spaces and ASCII control characters from 9 to 13).
It handles optional `+` or `-` signs to determine the sign of the result.
Parsing stops when the first non-digit character is encountered.
This implementation does not handle overflow or error conditions.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *str = "   -1234abc";
    int num = ft_atoi(str);
    printf("Converted number: %d\n", num);
    return 0;
}
```

---
