/*
** EPITECH PROJECT, 2018
** rush1-3.c
** File description:
** 
*/
#include <unistd.h>

void	my_putchar(char c)
{
    write(1, &c, 1);
}

void	print_rush(int sizex, int sizey, int ix, int iy)
{
    if (sizex == 1 || sizey == 1)
	my_putchar('B');
    else if ((ix == 1 && iy == 1) || (ix == sizex && iy == 1))
	my_putchar('A');
    else if ((ix == 1 && iy == sizey) || (ix == sizex && iy == sizey))
	my_putchar('C');
    else if (iy == 1 || iy == sizey || ix == 1 || ix == sizex)
	my_putchar('B');
    if ((ix > 1 && ix < sizex) && (iy > 1 && iy < sizey))
	my_putchar(' ');
}

void	execute_rush(int sizex, int sizey)
{
    int ix = 1;
    int iy = 1;
    
    for (iy; iy <= sizey; iy++) {
	for (ix; ix <= sizex; ix++) {
	    print_rush(sizex, sizey, ix, iy);
	}
	ix = 1;
	my_putchar('\n');
    }
}

void	rush(int sizex, int sizey)
{
    if (sizex <= 0 || sizey <= 0)
	write(1, "Invalid size\n", 13);
    else
	execute_rush(sizex, sizey);
}

int	main(void)
{
    rush(1,1);
    return (0);
}
