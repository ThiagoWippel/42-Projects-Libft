# ft_strchr Documentation

### Function Prototype

```c
char *ft_strchr(const char *str, int c);
```

---

### Description

`ft_strchr` locates the first occurrence of the character `c` in the null-terminated string `str`.

---

### Parameters

* `const char *str`: The string in which to search for the character.
* `int c`: The character to locate, passed as an int but interpreted as an unsigned char.

---

### Return Value

Returns a pointer to the first occurrence of `c` in `str`, or `NULL` if `c` is not found.
If `c` is `'\0'`, a pointer to the null terminator is returned.

---

### Details

The function scans the string from left to right, comparing each character with `c`.
It includes a specific check for the null terminator, allowing `'\0'` to be detected as a valid match.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *text = "42 São Paulo";
    char *ptr = ft_strchr(text, 'S');
    if (ptr)
        printf("Character found: %s\n", ptr);
    else
        printf("Character not found.\n");
    return (0);
}
```

---
