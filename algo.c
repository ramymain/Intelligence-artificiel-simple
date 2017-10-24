/*
** main.c for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Thu Mar  3 19:29:21 2016 FERJANI RAMY
** Last update Fri Mar  4 16:04:30 2016 FERJANI RAMY
*/

#include "algo.h"

int	main(int argc, char **argv)
{
  t_info	player;

  player.pdv = my_getnbr(argv[1]);
  player.pdr = my_getnbr(argv[2]);
  if (argc != 4)
    my_putstr("Trop ou pas assez d'arguments\n./algo <vie> <ressource> <map>");
  else if ((my_getnbr(argv[1])) == 0)
    my_putstr("Les points de vies ne peuvent pas etre nul\n");
  else if ((my_getnbr(argv[1]) < 1) || (my_getnbr(argv[1]) < 0))
    my_putstr("Les points de vies et ressources ne peuvent pas etre negatif\n");
  else if ((malloc_map(argv[3], player)) < 0)
    my_putstr("Map inaccessible\n");
  return 0;
}
