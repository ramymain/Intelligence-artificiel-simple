/*
** my_putstr.c for quest in /home/ferjan_r/FDI-DEVC/Jour03/my_putstr
**
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Wed Sep 30 09:15:42 2015 FERJANI Ramy
** Last update Fri Mar  4 11:13:47 2016 FERJANI RAMY
*/

#include "algo.h"

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (*(str + i) != 0)
    {
      my_putchar(*(str + i));
      i += 1;
    }
}
