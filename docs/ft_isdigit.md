# ft_isdigit Documentation

### Function Prototype

```c
int ft_isdigit(int c);
```

---

### Description

`ft_isdigit` checks whether the given character `c` is a decimal digit (`'0'` through `'9'`).

---

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or `EOF`).

---

### Return Value

Returns a non-zero value (true) if `c` is a decimal digit between `'0'` and `'9'`.
Returns `0` (false) otherwise, including when `c` is outside the ASCII range (0–127).

---

### Details

The function first verifies that `c` is within the ASCII range. If it is not, the function immediately returns `0`.
It then checks whether `c` falls within the ASCII values corresponding to the digits `'0'` through `'9'`.
This implementation mimics the behavior of the standard C `isdigit` function, with additional validation for non-ASCII input.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = '3';
    if (ft_isdigit(ch))
        printf("%c is a digit.\n", ch);
    else
        printf("%c is not a digit.\n", ch);
    return 0;
}
```

---
