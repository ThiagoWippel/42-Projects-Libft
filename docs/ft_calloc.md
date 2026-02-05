# ft_calloc Documentation

### Function Prototype

```c
void *ft_calloc(size_t nmemb, size_t size);
```

---

### Description

`ft_calloc` allocates memory for an array of `nmemb` elements of `size` bytes each, initializes all allocated bytes to zero, and returns a pointer to the allocated memory.

---

### Parameters

* `size_t nmemb`: Number of elements to allocate.
* `size_t size`: Size in bytes of each element.

---

### Return Value

Returns a pointer to the allocated and zero-initialized memory.
Returns `NULL` if the allocation fails or if an integer overflow occurs during size calculation.
If either parameter is zero, returns a valid pointer to 1 byte of allocated memory.

---

### Details

If either `nmemb` or `size` is zero, the function returns the result of `malloc(1)`, ensuring that a valid pointer is returned.
The function checks for overflow by verifying that the multiplication `nmemb * size` does not wrap around.
After allocation, the memory is initialized to zero using `ft_bzero`.

---

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        for (int i = 0; i < 5; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }
    return 0;
}
```

---
