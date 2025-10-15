/**
 * @file print_alphabet.c
 * @brief função que imprime o alfabeto em ordem crescente
 * @author Giovanni Ornellas
 * @version 1.0
 * @date 2025-10-14
 */

#include <unistd.h>

/**
 * @brief função paara imprimir um único char
 * @param letra uma única letra
 */

void my_putchar(char letra)
{
    write(1, &letra, 1);
}

/**
 * @brief imprime o alfabeto, sem espaço e sem quebra de linha, em ordem crescente
 */

void print_alphabet()
{
    char letra = 'a';

    while (letra <= 'z')
    {
        my_putchar(letra);
        letra++;
    }
}

int main(void)
{
    print_alphabet();
    return (0);
}