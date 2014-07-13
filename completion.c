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

int completion(char **grille)
{
	int y;
	int x;
	int c;
	int l;
	int s;
	char a;

	y = 1;
	x = 0;
	char a = '0'
	if (grille[x][y] == a)
	{
		if (verifligne(grille, x, y) == 0 && verifligne(grille, x, y) == 0
			&& verifligne(grille, x, y) == 0)
		{
			grille[x][y] = a;
			
	}

/*
	while (y != 10)
	{
		while (x != 9)
		{
			if ()
		}
	}
*/
}
