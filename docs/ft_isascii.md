# ft_isascii Documentation

### Function Prototype

```c
int ft_isascii(int c);
```

---

### Description

`ft_isascii` checks whether the given character `c` is a valid ASCII character (with values between 0 and 127 inclusive).

---

### Parameters

* `int c`: The character to be tested, passed as an integer.

---

### Return Value

Returns a non-zero value (true) if `c` is within the ASCII range (0–127).
Returns `0` (false) otherwise.

---

### Details

The function simply checks whether `c` lies within the valid ASCII range.
This implementation mimics the behavior of the standard C `isascii` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int ch = 128;
    if (ft_isascii(ch))
        printf("%d is an ASCII character.\n", ch);
    else
        printf("%d is not an ASCII character.\n", ch);
    return 0;
}
```

---
