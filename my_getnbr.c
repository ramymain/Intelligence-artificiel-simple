/*
** my_getnbr.c for exo2 in /home/ferjan_r/FDI-DEVC/Jour05/my_getnbr
**
** Made by FERJANI Ramy
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Tue Oct  6 15:03:30 2015 FERJANI Ramy
** Last update Fri Mar  4 11:25:37 2016 FERJANI RAMY
*/

#include "algo.h"

int	my_getnbr(char *str)
{
  int	nbr;
  int	i;
  int	sign;

  i = 0;
  nbr = 0;
  sign = 0;
  while  ((str[i] == 43) || (str[i] == 45))
    {
      if (str[i] == 45)
	++sign;
      ++i;
    }
  while (str[i] >= 48 && str[i] <= 57)
    {
      nbr = nbr * 10 + (str[i] - 48);
	++i;
    }
  if (sign % 2 == 1)
    nbr *= -1;
  return (nbr);
}
