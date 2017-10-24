/*
** func_calc_distance.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Fri Mar  4 12:05:35 2016 FERJANI RAMY
** Last update Fri Mar  4 12:13:17 2016 FERJANI RAMY
*/

#include "algo.h"

int	calc_dist(int xa, int xb, int ya, int yb)
{
  int	x_dist;
  int	y_dist;

  x_dist = xb - xa;
  y_dist = ya - yb;
  if(x_dist < 0)
    x_dist = x_dist * -1;
  if(y_dist < 0)
    y_dist = y_dist * -1;
  return (x_dist + y_dist);
}
