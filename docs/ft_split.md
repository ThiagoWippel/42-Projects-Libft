# ft_split Documentation

### Function Prototype

```c
char **ft_split(char const *s, char c);
```

---

### Description

`ft_split` splits the string `s` into an array of strings (words) separated by the delimiter character `c`.
The resulting array is terminated by a `NULL` pointer.

---

### Parameters

* `char const *s`: The null-terminated string to be split.
* `char c`: The delimiter character used to separate words.

---

### Return Value

Returns a pointer to a null-terminated array of strings resulting from the split.
Returns `NULL` if `s` is `NULL` or if any memory allocation fails.

---

### Details

The function first counts the number of words separated by the delimiter `c` and allocates memory for the array accordingly.
Each word is extracted using `ft_substr` and stored in the array.
If any memory allocation fails during the process, all previously allocated memory is freed before returning `NULL`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char **words = ft_split("Hello world from 42", ' ');
    if (words)
    {
        for (int i = 0; words[i] != NULL; i++)
            printf("Word[%d]: %s\n", i, words[i]);
        for (int i = 0; words[i] != NULL; i++)
            free(words[i]);
        free(words);
    }
    return (0);
}
```

---
