/*
** func_to_condition.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Fri Mar  4 16:23:13 2016 FERJANI RAMY
** Last update Fri Mar  4 16:23:48 2016 FERJANI RAMY
*/

#include "algo.h"

t_info	to_exit(t_info player)
{
  int dist;

  if ((dist = calc_dist(player.pos[0], player.exit[0],
			player.pos[1], player.exit[1])) <= player.pdv)
    {
      player.pdv = player.pdv - dist;
      player.pos[0] = player.exit[0];
      player.pos[1] = player.exit[1];
    }
  return (player);
}

t_info	to_ressource(t_info player, t_ressource *ress, int dist_pdv, int i)
{
  if (((dist_ress(ress, player, i)) > 0 || (dist_exit(ress, player, i)) > 0) && dist_pdv >= 0)
    {
      player.pdv = player.pdv - dist_pdv;
      player.pdv = player.pdv + player.pdr;
      player.pos[0] = ress[i].x;
      player.pos[1] = ress[i].y;
    }
  return (player);
}

t_info	to_death(t_info player, int i)
{
  if ((((player.pos[0] < player.exit[0]) || (player.pos[0] > player.exit[0])) ||
       ((player.pos[1] < player.exit[1]) || (player.pos[1] > player.exit[1]))) && ((i == (player.nbr_res - 1)) || (player.fin == 1)))
    {
      player.pdv = player.pdv - 1;
      player.fin = 1;
    }
  return (player);
}

