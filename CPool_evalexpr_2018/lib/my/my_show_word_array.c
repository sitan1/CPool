/*
** EPITECH PROJECT, 2018
** my_show_word_array
** File description:
** my_show_word_array
*/

#include "../../include/my.h"

int my_show_word_array(char * const *tab)
{
    my_putstr(concat_params(my_arraylen(tab), tab));
}
