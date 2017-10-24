/*
** my_putchar.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Thu Mar  3 18:53:05 2016 FERJANI RAMY
** Last update Thu Mar  3 18:55:05 2016 FERJANI RAMY
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
