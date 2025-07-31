# Makefile Documentation / Documentação do Makefile

### File / Arquivo

Makefile for building the `libft.a` static library.

Makefile para compilação da biblioteca estática `libft.a`.

---

### Description / Descrição

This Makefile automates the compilation of source files into object files and then archives them into the static library `libft.a`. It supports building both the mandatory Libft functions and bonus functions, with separate targets for full recompilation and cleaning.

Este Makefile automatiza a compilação dos arquivos fonte em arquivos objeto e, em seguida, os arquiva na biblioteca estática `libft.a`. Suporta a compilação das funções obrigatórias e das funções bônus da Libft, com alvos separados para recompilação completa e limpeza.

---

### Variables / Variáveis

* `NAME`: The name of the output static library (`libft.a`).

* `CC`: The compiler to be used (`cc`).

* `CFLAGS`: Compiler flags including warnings and header include path (`-Wall -Wextra -Werror -I.`).

* `SRC`: List of source files (.c) for mandatory Libft functions.

* `BONUS_SRC`: List of source files (.c) for bonus Libft functions.

* `OBJ`: List of object files (.o) derived from `SRC`.

* `BONUS_OBJ`: List of object files (.o) derived from `BONUS_SRC`.

 

* `NAME`: Nome da biblioteca estática gerada (`libft.a`).

* `CC`: O compilador utilizado (`cc`).

* `CFLAGS`: Flags do compilador, incluindo avisos e caminho para headers (`-Wall -Wextra -Werror -I.`).

* `SRC`: Lista dos arquivos fonte (.c) das funções obrigatórias da Libft.

* `BONUS_SRC`: Lista dos arquivos fonte (.c) das funções bônus da Libft.

* `OBJ`: Lista dos arquivos objeto (.o) derivados de `SRC`.

* `BONUS_OBJ`: Lista dos arquivos objeto (.o) derivados de `BONUS_SRC`.

---

### Targets / Alvos

* `all`: Default target. Builds the static library with mandatory functions.

* `$(NAME)`: Compiles object files from mandatory sources and archives into `libft.a`.

* `bonus`: Builds the static library including both mandatory and bonus object files.

* `%.o`: Pattern rule to compile `.c` files into `.o` object files, dependent on `libft.h`.

* `clean`: Removes all compiled object files from both mandatory and bonus sources.

* `fclean`: Runs `clean` and removes the static library file `libft.a`.

* `re`: Cleans and rebuilds everything from scratch.

 

* `all`: Alvo padrão. Compila a biblioteca estática com as funções obrigatórias.

* `$(NAME)`: Compila os objetos das fontes obrigatórias e arquiva na `libft.a`.

* `bonus`: Compila a biblioteca incluindo os objetos das funções obrigatórias e bônus.

* `%.o`: Regra genérica para compilar arquivos `.c` em `.o`, dependendo de `libft.h`.

* `clean`: Remove todos os arquivos objeto compilados das fontes obrigatórias e bônus.

* `fclean`: Executa `clean` e remove o arquivo da biblioteca estática `libft.a`.

* `re`: Limpa e recompila tudo do zero.

---

### Usage / Uso

Run `make` or `make all` to compile the mandatory Libft library.

Run `make bonus` to compile the library including bonus functions.

Run `make clean` to remove object files.

Run `make fclean` to remove object files and the library archive.

Run `make re` to clean and rebuild the library entirely.

 

Execute `make` ou `make all` para compilar a biblioteca Libft com as funções obrigatórias.

Execute `make bonus` para compilar a biblioteca incluindo as funções bônus.

Execute `make clean` para remover arquivos objeto.

Execute `make fclean` para remover arquivos objeto e a biblioteca estática.

Execute `make re` para limpar e recompilar completamente a biblioteca.

---

### Details / Detalhes

* The Makefile uses standard compilation flags enforcing strict warnings (`-Wall -Wextra -Werror`).

* The include path is set to the current directory (`-I.`) to locate `libft.h`.

* Object files are generated alongside source files.

* The archive command `ar rcs` creates or updates the static library efficiently.

* Phony targets ensure that commands run even if files with those names exist.

 

* O Makefile utiliza flags padrão de compilação que aplicam avisos estritos (`-Wall -Wextra -Werror`).

* O caminho para includes está definido para o diretório atual (`-I.`) para localizar o `libft.h`.

* Os arquivos objeto são gerados junto aos arquivos fonte.

* O comando de arquivamento `ar rcs` cria ou atualiza eficientemente a biblioteca estática.

* Alvos `.PHONY` garantem que os comandos sejam executados mesmo se existirem arquivos com esses nomes.

---

### Example / Exemplo

```sh
make          # Build mandatory functions library
make bonus    # Build library including bonus functions
make clean    # Remove object files
make fclean   # Remove object files and library archive
make re       # Rebuild library from scratch
```

```sh
make          # Compila biblioteca com funções obrigatórias
make bonus    # Compila biblioteca incluindo funções bônus
make clean    # Remove arquivos objeto
make fclean   # Remove arquivos objeto e arquivo da biblioteca
make re       # Recompila biblioteca do zero
```

---
