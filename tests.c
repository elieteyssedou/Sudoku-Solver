/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eteyssed <eteyssed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/13 03:36:16 by eteyssed          #+#    #+#             */
/*   Updated: 2014/07/13 03:36:21 by eteyssed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	resxy(int square, int *x, int *y);

int		verifligne(char **grille, int y, char a)
{
	int x;

	x = 0;
	while (grille[y][x] != '\0')
	{
		if (grille[y][x] != a)
		{
			x++;
		}
		else
		{
			return (1);
		}
	}
	return (0);
}

int		verifcolonne(char **grille, int x, char a)
{
	int y;

	y = 0;
	while (y != 10)
	{
		if (grille[y][x] != a)
			y++;
		else
			return (1);
	}
	return (0);
}

int		verifsquare(char **grille, int y, int x, char a)
{
	int square;
	int c;
	int l;
	
	c = y + 3;
	l = x + 3;
	square = defsquare(x, y);
	resxy(square, &x, &y);
	while (y != c)
	{
		x = l - 3;
		while (x != l)
		{
			if (grille[y][x] != a)
				x++;
			else
				return (1);
		}
		y++;
	}
	return (0);
}

int		defsquare(int x, int y)
{
	int square;

	if (x >=0 && x <=3 && y >= 1 && y <= 3)
		square = 1;
	else if (x >=4 && x <=6 && y >= 1 && y <= 3)
		square = 2;
	else if (x >=7 && x <=9 && y >= 1 && y <= 3)
		square = 3;
	else if (x >=0 && x <=3 && y >= 4 && y <= 6)
		square = 4;
	else if (x >=4 && x <=6 && y >= 4 && y <= 6)
		square = 5;
	else if (x >=7 && x <=9 && y >= 4 && y <= 6)
		square = 6;
	else if (x >=0 && x <=3 && y >= 7 && y <= 9)
		square = 7;
	else if (x >=4 && x <=6 && y >= 7 && y <= 9)
		square = 8;
	else if (x >=7 && x <=9 && y >= 7 && y <= 9)
		square = 9;
	return (square);
}

void	resxy(int square, int *x, int *y)
{
	if (square == 1 || square == 2 || square == 3)
		*y = 1;
	else if (square == 4 || square == 5 || square == 6)
		*y = 4;
	else if (square == 7 || square == 8 || square == 9)
		*y = 7;
	if (square == 1 || square == 4 || square == 7)
		*x = 0;
	else if (square == 2 || square == 5 || square == 8)
		*x = 3;
	else if (square == 3 || square == 6 || square == 9)
		*x = 6;
}
