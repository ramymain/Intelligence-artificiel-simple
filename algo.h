/*
** algo.h for algo in /Users/ferjan_r/Documents/algo ia
**
** Made by FERJANI RAMY
** Login   <ferjan_r@etna-alternance.net>
**
** Started on  Thu Mar  3 18:49:13 2016 FERJANI RAMY
** Last update Fri Mar  4 16:26:16 2016 FERJANI RAMY
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef __ALGO__
#define __ALGO__

typedef struct	info
{
  int	pdv;
  int	pdr;
  int	pos[2];
  int	exit[2];
  int	nbr_res;
  int	fin;
}	t_info;

typedef struct	ressource
{
  int	x;
  int	y;
}	t_ressource;

void	my_putchar(char c);
void	my_putstr(char *str);
int	my_getnbr(char *str);
int	malloc_map(char *map, t_info player);
int	fill_map(char *map, t_ressource *ress, t_info player);
int	calc_dist(int xa, int xb, int ya, int yb);
void	finder(t_ressource *ress, t_info player);
t_info	to_exit(t_info player);
t_info	to_ressource(t_info player, t_ressource *ress, int dist_pdv, int i);
t_info	to_death(t_info player, int i);
int	dist_ress(t_ressource *ress, t_info player, int i);
int	dist_exit(t_ressource *ress, t_info player, int i);
#endif
