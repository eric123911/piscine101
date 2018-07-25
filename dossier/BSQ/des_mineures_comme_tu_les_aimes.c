/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   des_mineures_comme_tu_les_aimes.c                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bjuarez <bjuarez@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/24 09:34:41 by bjuarez      #+#   ##    ##    #+#       */
/*   Updated: 2018/07/25 15:30:27 by eschnell    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#define BUF_SIZE 1

int	g_x = 0;
int	g_y = 0;
int	g_res = 0;

typedef struct		s_struct
{
	int		x;
	int		y;
	char		empt;
	char		obst;
	char 		full;
}			t_struct;

/*
typedef struct		s_res
{
	int		x;
	int		y;
	int		res;
}			t_res;
*/



int	ft_cmp_val(int **tab, int i, int j)
{
	if (tab[i][j - 1] <= tab[i - 1][j])
	{
		if (tab[i][j - 1] <= tab[i - 1][j - 1])
			return (tab[i][j - 1]);
	}
	else if (tab[i - 1][j] <= tab[i][j - 1])
	{
		if (tab[i - 1][j] <= tab[i - 1][j - 1])
			return (tab[i - 1][j]);
	}
	return (tab[i - 1][j - 1]);
}

int	**find_largest_nb(int **src, t_struct sym) //, t_res ans)
{
	int	i;
	int	j;
	int	res;

	i = 1;
	res = 0;
	while (i < sym.y)
	{
		j = 0;
		while (j < sym.x)
		{
			if (j == 0)
				j++;
			if (src[i][j] > 0)
				src[i][j] = 1 + ft_cmp_val(src, i, j);
			if (src[i][j] > res)
			  {
			    res = src[i][j];
			    g_x = j;
			    g_y = i;
			    g_res = res;
			  }
			j++;
		}
		i++;
	}
	return (src);
}

int	ft_size(char *str, int i)
{
  while (str[i] == '\n')
    str++;
  if (str[i] != '\n' && str[i])
    {
      while (str[i] != '\n' && str[i])
	i++;
    }
  return (i);
}

int	ft_count(char *str)
{
  int i;
  int word_count;

  i = 0;
  word_count = 0;
  while (str[i])
    {
      while (str[i] == '\n')
	i++;
      if (str[i] != '\n' && str[i])
	{
	  while (str[i] != '\n' && str[i])
	    i++;
	  word_count++;
	}
    }
  return (word_count);
}


/*
** Strip '\n' from char *str
*/
char	**ft_split_backslash_n(char *str, int k)
{
  int i;
  int index2;
  int nbr_word;
  char **tab;
  char *tab_word;

  i = 0;
  index2 = 0;
  nbr_word = ft_count(str);
  tab = (char**)malloc(sizeof(char*) * (nbr_word + 1));
  while (index2 < nbr_word)
    {
      tab_word = (char*)malloc(sizeof(char) * (ft_size(str, k) + 2));
      while (str[k] == '\n')
	k++;
      while (str[k] != '\n')
	tab_word[i++] = str[k++];
      tab_word[i++] = str[k++];
      tab_word[i++] = '\0';
      tab[index2++] = tab_word;
      i = 0;
    }
  tab[index2] = 0;
  return (tab);
}

int	**ft_convert_tab(char **stdin, int x, int y, char obst) //t_struct map_id
{
  int	**tab;
  int	i;
  int	j;

  i = 0;
  j = 0;
  tab = malloc(sizeof(int *) * (y + 1));
  if (tab == NULL)
    return (NULL);
  while (stdin[i])
  {
    	j = 0;
	tab[i] = malloc(sizeof(int) * (x + 1));
	while (stdin[i][j] != '\n')
	{
		if (stdin[i][j] == obst)
			tab[i][j] = 0;
		else
			tab[i][j] = 1;
		j++;
	}
	i++;
  }
  return (tab);
}



/*
** Retranspose le tab binaire en tab
**    de char et remplit le BSQ
*/
void	ft_print_res_final_tab(char **ftab, t_struct sym) //, t_res ans)
{
  int	st_x;
  int	st_y;

  st_x = g_x;
  st_y = g_y;
  ftab[g_y][g_x] = sym.full;  
  while (g_y > (st_y - g_res))
    {
      while (g_x > (st_x - g_res))
	{
	  ftab[g_y][g_x] = sym.full;
	  g_x--;
	}
      g_x = st_x;
      g_y--;
      }
}


/*
** Rempli le tableau de '*'
 */
char	**ft_fill_final_tab(int **tab, t_struct sym) //, t_res ans)
{
  int	i;
  int	j;
  char	**tabf;

  //ans.res = 0;
  i = 0;
  tabf = malloc(sizeof(char*) * (sym.y + 1));		// <====== Malloc PROBLEMATIQUE
  while (i < sym.y)
    {
      j = 0;
      tabf[i] = malloc(sizeof(char) * (sym.x + 1));
      while (j < sym.x)
	{
	  //printf("%i", tab[9][j]);
	  if (tab[i][j] == 0)
	    tabf[i][j] = sym.obst;
	  else
	    tabf[i][j] = sym.empt;
	  j++;
	}
      j++;
      tabf[i][j] = '\0';
      i++;
    }
  i++;
  ft_print_res_final_tab(tabf, sym);
  return (tabf);
}





int	main(int ac, char **av)
{
  int	i, j, fd, **i_tab;
  char	buf[BUF_SIZE];
  char	*str, **tab;

  if (ac != 2)
    return (0);


/*
** compte les chars
*/
  i = 0, j = 0;
  fd = open(av[1], O_RDWR);
  if (fd >= 0)
  {
    while (read(fd, buf, BUF_SIZE))
      {
	if (buf[0] == '\n')
	  i++;
	if (i != 0)
	  j++;
      }
    close(fd);
  }

/*
** Transforme la chaine de chars
** 	en tab de chars
*/
  str = malloc(sizeof(char) * (j + 1));
  fd = open(av[1], O_RDWR);
  i = 0; j = 0;
  if (fd >= 0)
    {
      while (read(fd, buf, BUF_SIZE))
        {
          if (buf[0] == '\n')
            i++;
          if (i != 0)
          {
	    str[j] = buf[0];
	    j++;
	  }
	}
      str[j++] = '\0';
      close(fd);
    }
  tab = ft_split_backslash_n(str, 0);
  free(str);


  /*
  ** Convertit le tab en tab binaire
  */
  int x = 10000;
  int y = 10000;
  i_tab = ft_convert_tab(tab, x, y, 'o');
  free(tab);
  
  t_struct      sym;
  sym.x = x;
  sym.y = y;
  sym.empt = '.';
  sym.obst = 'o';
  sym.full = 'x';


  /*
  ** Fonction demineur
   */
  i_tab = find_largest_nb(i_tab, sym); //, ans);
  i = 0;
  /*
  printf ("\n");
  while (i_tab[i])
  {
  	j = 0;
	while (j < y)
        {
	  printf("%i ", i_tab[i][j]);             // print le tab binaire avec le + grand carre
	  j++;
	}
	printf("\n");
	i++;
  }
  */

  /*
  ** Fonction qui retranspose les 0 et 1
  ** en chars et rempli le + grand carre
   */
  char **c_tab;
  c_tab = ft_fill_final_tab(i_tab, sym); //, ans); //Problematic funct
  free(i_tab);
  i = 0;
  printf("\n");
  while (c_tab[i])
    {
      printf("%s\n", c_tab[i]);             // print le char **c_tab
      i++;
    }

  return (0);
}
