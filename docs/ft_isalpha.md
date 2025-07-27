ft_isalpha Documentation
Function Prototype / Protótipo da Função
c
Copy
Edit
int ft_isalpha(int c);
Description / Descrição
ft_isalpha checks whether the given character c is an alphabetic letter (uppercase or lowercase).
ft_isalpha verifica se o caractere fornecido c é uma letra do alfabeto (maiúscula ou minúscula).

Parameters / Parâmetros
int c: The character to be tested, passed as an integer (usually an unsigned char cast to int or EOF).
int c: Caractere a ser testado, passado como inteiro (geralmente um unsigned char convertido para int ou EOF).

Return Value / Valor de Retorno
Returns non-zero (true) if c is an uppercase ('A' to 'Z') or lowercase ('a' to 'z') alphabetic character.
Retorna diferente de zero (verdadeiro) se c for uma letra alfabética maiúscula ('A' a 'Z') ou minúscula ('a' a 'z').

Returns 0 (false) otherwise, including when c is outside the ASCII range (0–127).
Retorna 0 (falso) caso contrário, inclusive quando c estiver fora do intervalo ASCII (0–127).

Details / Detalhes
The function first verifies that c lies within the ASCII range. If not, it immediately returns 0.
Em primeiro lugar, a função verifica se c está dentro do intervalo ASCII. Se não estiver, retorna 0 imediatamente.

Then it checks whether c falls within the ranges of uppercase or lowercase alphabetic ASCII values.
Depois, ela verifica se c está nos intervalos ASCII das letras maiúsculas ou minúsculas.

This implementation mimics the behavior of the standard C isalpha function, with added validation for non-ASCII input.
Esta implementação imita o comportamento da função isalpha da biblioteca padrão C, com validação adicional para entradas fora do ASCII.

Example Usage / Exemplo de Uso
c
Copy
Edit
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
