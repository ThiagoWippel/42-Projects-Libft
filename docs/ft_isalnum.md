# ft_isalnum Documentation

### Function Prototype

```c
int ft_isalnum(int c);
```

---

### Description

`ft_isalnum` checks whether the given character `c` is alphanumeric (either a letter or a digit).

---

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or `EOF`).

---

### Return Value

Returns a non-zero value (true) if `c` is an uppercase letter (`'A'` to `'Z'`), a lowercase letter (`'a'` to `'z'`), or a digit (`'0'` to `'9'`).
Returns `0` (false) otherwise, including when `c` is outside the ASCII range (0–127).

---

### Details

The function first verifies that `c` is within the ASCII range. If it is not, the function immediately returns `0`.
It then checks whether `c` falls within the ASCII ranges for uppercase letters, lowercase letters, or digits.
This implementation mimics the behavior of the standard C `isalnum` function, with additional validation for non-ASCII input.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = 'A';
    if (ft_isalnum(ch))
        printf("%c is alphanumeric.\n", ch);
    else
        printf("%c is not alphanumeric.\n", ch);
    return 0;
}
```

---
