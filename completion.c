/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   completion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <eteyssed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 04:42:11 by eteyssed          #+#    #+#             */
/*   Updated: 2014/07/13 04:42:13 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		verifligne(char **grille, int y, char a);
int		verifcolonne(char **grille, int x, char a);
int		verifsquare(char **grille, int y, int x, char a);
void	affgrille(char **grille);

void	completion(char **grille)
{
	int 	y;
	int 	x;
	char	a;
	int 	valid;

	valid = 0;
	while (valid != 1)
	{
		y = 1;
		while (y != 10) 
		{
			x = 0;
			while (x != 9)
			{
				if (grille[y][x] == '.')
				{
					if (verifligne(grille, x, a) == 0 && verifligne(grille, x, a) == 0
					&& verifligne(grille, x, a) == 0)
					{
						grille[y][x] = a;
						x++;
						a = '1';
					}
					else if (a >= 1 && a <= 9)
					{
						a++;
					}
				}
				else
				{
					x++;
				}
			}
			y++;
		}
		y = 1;
		while (y != 10) 
		{
			x = 0;
			while (x != 9)
			{
				a = grille[y][x];
				if (verifligne(grille, x, a) == 1 || verifligne(grille, x, a) == 1
				|| verifligne(grille, x, a) == 1)
				{
					grille[y][x] = '.';
					x++;
				}
				else
					x++;
			}
			y++;
		}
		y = 1;
		while (y != 10)
		{
			x = 0;
			while (x != 9)
			{
				if (grille[y][x] == '.')
					break;
				else
					x++;
			}
			if (grille[y][x] == '.')
				break;
			else
				y++;
		}
		if (y == 10)
			valid = 1;
	}
	affgrille(grille);
}