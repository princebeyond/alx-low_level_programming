#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - pp
 * @width: width
 * @height: height
 * Return: success
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;

	if ((width <= 0 || height <= 0))
	{
		return (NULL);
	}
	p = (int **) malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(p[j]);
			}
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
