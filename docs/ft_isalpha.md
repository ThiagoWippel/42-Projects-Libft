# ft_isalpha Documentation

### Function Prototype

```c
int ft_isalpha(int c);
```

---

### Description

`ft_isalpha` checks whether the given character `c` is an alphabetic letter (uppercase or lowercase).

---

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or `EOF`).

---

### Return Value

Returns a non-zero value (true) if `c` is an uppercase (`'A'` to `'Z'`) or lowercase (`'a'` to `'z'`) alphabetic character.
Returns `0` (false) otherwise, including when `c` is outside the ASCII range (0–127).

---

### Details

The function first verifies that `c` is within the ASCII range. If it is not, the function immediately returns `0`.
It then checks whether `c` falls within the ASCII ranges for uppercase or lowercase alphabetic characters.
This implementation mimics the behavior of the standard C `isalpha` function, with additional validation for non-ASCII input.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = 'G';
    if (ft_isalpha(ch))
        printf("%c is an alphabetic character.\n", ch);
    else
        printf("%c is not an alphabetic character.\n", ch);
    return 0;
}
```
