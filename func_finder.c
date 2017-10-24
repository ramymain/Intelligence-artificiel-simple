/*
** func_finder.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Fri Mar  4 12:18:25 2016 FERJANI RAMY
** Last update Fri Mar  4 16:43:37 2016 FERJANI RAMY
*/

#include "algo.h"

int	dist_ress(t_ressource *ress, t_info player, int i)
{
  int	dist;

  dist = calc_dist(player.pos[0], ress[i].x,
		   player.pos[1], ress[i].y);
  if (dist < player.pdr)
    return (1);
  else
    return (-1);
}

int	dist_exit(t_ressource *ress, t_info player, int i)
{
  int	dist;
  int	dist_res_exit;

  dist_res_exit = calc_dist(ress[i].x, player.exit[0],
		   ress[i].y, player.exit[1]);
  dist = calc_dist(player.pos[0], player.exit[0],
		   player.pos[1], player.exit[1]);
  if (dist_res_exit <= dist)
    return (1);
  else
    return (-1);
}

void	display_result(t_info player)
{
  if (player.pdv <= 0 && player.fin == 1)
    my_putstr("KO\n");
  else
    my_putstr("OK\n");
}

void	find_ress(t_ressource *ress, t_info player)
{
  int	i;
  int	dist_pdv;

  i = 0;
  while ((player.pos[0] != player.exit[0])
	 && (player.pos[1] != player.exit[1])
	 && player.pdv > 0)
    {
      while (i < player.nbr_res && player.pdv > 0)
	{
	  if ((ress[i].x != player.pos[0]) &&
	      (ress[i].y != player.pos[1]))
	    {
	      dist_pdv = player.pdv - calc_dist(player.pos[0], ress[i].x,
						player.pos[1], ress[i].y);
	      player = to_exit(player);
	      player = to_ressource(player,ress, dist_pdv, i);
	      player = to_death(player, i);
	    }
	  ++i;
	}
      i = 0;
    }
  display_result(player);
}

void	finder(t_ressource *ress, t_info player)
{
  int	dist;

  dist = calc_dist(player.pos[0], player.exit[0],
		   player.pos[1], player.exit[1]);
  if (player.pdv < dist)
    find_ress(ress, player);
  else
    my_putstr("OK\n");
}
