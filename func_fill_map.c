/*
** func_fill_map.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Fri Mar  4 12:09:46 2016 FERJANI RAMY
** Last update Fri Mar  4 16:42:59 2016 FERJANI RAMY
*/


#include "algo.h"

t_info	entree_sortie(t_info player, char buffer, int x, int y)
{
  if (buffer == '@')
    {
      player.pos[0] = x;
      player.pos[1] = y;
    }
  else if (buffer == '#')
    {
      player.exit[0] = x;
      player.exit[1] = y;
    }
  return player;
}

int	fill_map(char *map, t_ressource *ress, t_info player)
{
  int		fp;
  int		x;
  int		y;
  int		i;
  char		buffer;

  i = 0;
  x = 0;
  y = 0;
  if ((fp = open(map, O_RDONLY)) == -1)
    return (-1);
  while (read(fp, &buffer, 1) > 0)
    {
      player = entree_sortie(player, buffer, x, y);
      if (buffer == '+')
	{
	  ress[i].x = x;
	  ress[i].y = y;
	  ++i;
	}
      if (buffer != '\n')
	++x;
      else if (buffer == '\n')
	{
	  ++y;
	  x = 0;
	}
    }
  finder(ress, player);
  return (0);
}
