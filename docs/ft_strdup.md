# ft_strdup Documentation

### Function Prototype

```c
char *ft_strdup(const char *str);
```

---

### Description

`ft_strdup` duplicates the null-terminated string `str` by allocating sufficient memory and copying the string contents into the newly allocated memory area.

---

### Parameters

* `const char *str`: The null-terminated string to duplicate.

---

### Return Value

Returns a pointer to the newly allocated duplicate string.
Returns `NULL` if memory allocation fails.

---

### Details

The function first calculates the length of `str`, including the terminating null byte.
It then allocates enough memory, copies the string using `ft_strlcpy`, and returns a pointer to the duplicated string.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *original = "Hello, 42!";
    char *copy = ft_strdup(original);
    if (copy)
    {
        printf("Copied string: %s\n", copy);
        free(copy);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return (0);
}
```

---
