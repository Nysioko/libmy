/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_swap
*/

void my_swap(char *x, char *y)
{
    char z;

    z = *x;
    *x = *y;
    *y = z;
}