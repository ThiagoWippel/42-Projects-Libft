# ft_isprint Documentation

### Function Prototype

```c
int ft_isprint(int c);
```

---

### Description

`ft_isprint` checks whether the given character `c` is a printable ASCII character, including the space character.

---

### Parameters

* `int c`: The character to be tested, passed as an integer (usually an `unsigned char` cast to `int` or `EOF`).

---

### Return Value

Returns a non-zero value (true) if `c` is a printable character with an ASCII value between 32 (space) and 126 (`~`).
Returns `0` (false) otherwise, including when `c` is outside the ASCII range (0–127).

---

### Details

The function first verifies that `c` is within the ASCII range. If it is not, the function immediately returns `0`.
It then checks whether `c` falls between ASCII values 32 and 126, which correspond to printable characters.
This implementation follows the behavior of the standard C `isprint` function.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char ch = ' ';
    if (ft_isprint(ch))
        printf("'%c' is a printable character.\n", ch);
    else
        printf("'%c' is not a printable character.\n", ch);
    return 0;
}
```

---
