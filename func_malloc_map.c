/*
** func_malloc_map.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Fri Mar  4 12:08:50 2016 FERJANI RAMY
** Last update Fri Mar  4 16:36:11 2016 FERJANI RAMY
*/

#include "algo.h"

int	malloc_map(char *map, t_info player)
{
  int		fp;
  int		x;
  int		y;
  int		r;
  char		buffer;
  t_ressource	*ress;
  x = 0;
  y = 0;
  r = 0;
  if ((fp = open(map, O_RDONLY)) == -1)
    return (-1);
  while (read(fp, &buffer, 1) > 0)
    {
      if (buffer == '+')
	++r;
      if (buffer != '\n' && y == 0)
	++x;
      else if (buffer == '\n')
	++y;
    }
  ress = malloc(r * sizeof(int));
  player.nbr_res = r;
  player.fin = 0;
  fill_map(map, ress, player);
  return (0);
}
