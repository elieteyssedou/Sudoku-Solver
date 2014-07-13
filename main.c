/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <eteyssed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 00:26:35 by eteyssed          #+#    #+#             */
/*   Updated: 2014/07/13 00:26:40 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str);
int		ft_putchar(char c);
void	affgrille(char **grille);
int		verifligne(char **grille, int y, char a);
int		verifcolonne(char **grille, int x, char a);
int		verifsquare(char **grille, int x, int y, char a);

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = 0;
	y = 1;
	if (argc != 10)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	while (y != 10)
	{
		x = 0;
		while (argv[y][x] != '\0')
			x++;
		if (x != 9)
		{
			ft_putstr("Erreur\n");
			return (0);
		}
		y++;
	}
	printf("ligne : %d\ncolone : %d\nsquare : %d\n", verifligne(argv, 6, '5'),
		verifcolonne(argv, 3, '5'), verifcase(argv, 6, 3, '5'));
	return (0);
}

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	affgrille(char **grille)
{
	int i;
	int k;
	int y;
	int x;

	i = 0;
	k = 0;
	y = 1;
	while (y != 10)
	{
		x = 0;
		while (grille[y][x] != '\0')
		{
			ft_putchar(grille[y][x]);
			if (x < 8)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			x++;
		}
		y++;
	}
