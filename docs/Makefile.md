# Makefile Documentation

### File

Makefile for building the `libft.a` static library.

---

### Description

This Makefile automates the compilation of source files into object files and then archives them into the static library `libft.a`. It supports building both the mandatory Libft functions and the bonus functions, with separate targets for full recompilation and cleanup.

---

### Variables

* `NAME`: The name of the output static library (`libft.a`).
* `CC`: The compiler used (`cc`).
* `CFLAGS`: Compiler flags, including warnings and the header include path (`-Wall -Wextra -Werror -I.`).
* `SRC`: List of source files (`.c`) for mandatory Libft functions.
* `BONUS_SRC`: List of source files (`.c`) for bonus Libft functions.
* `OBJ`: List of object files (`.o`) derived from `SRC`.
* `BONUS_OBJ`: List of object files (`.o`) derived from `BONUS_SRC`.

---

### Targets

* `all`: Default target. Builds the static library with mandatory functions.
* `$(NAME)`: Compiles object files from mandatory sources and archives them into `libft.a`.
* `bonus`: Builds the static library including both mandatory and bonus object files.
* `%.o`: Pattern rule to compile `.c` files into `.o` object files, depending on `libft.h`.
* `clean`: Removes all compiled object files from both mandatory and bonus sources.
* `fclean`: Runs `clean` and removes the static library file `libft.a`.
* `re`: Cleans and rebuilds everything from scratch.

---

### Usage

Run `make` or `make all` to compile the mandatory Libft library.

Run `make bonus` to compile the library including bonus functions.

Run `make clean` to remove object files.

Run `make fclean` to remove object files and the library archive.

Run `make re` to clean and rebuild the library entirely.

---

### Details

* The Makefile uses strict compilation flags (`-Wall -Wextra -Werror`).
* The include path is set to the current directory (`-I.`) to locate `libft.h`.
* Object files are generated alongside their corresponding source files.
* The `ar rcs` command efficiently creates or updates the static library.
* Phony targets ensure commands are executed even if files with the same names exist.

---

### Example

```sh
make          # Build mandatory functions library
make bonus    # Build library including bonus functions
make clean    # Remove object files
make fclean   # Remove object files and library archive
make re       # Rebuild library from scratch
```
