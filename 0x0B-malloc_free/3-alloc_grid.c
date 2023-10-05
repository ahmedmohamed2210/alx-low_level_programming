#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - create two dimensional array of zeros
 * 
 * @width: int number of grid width
 * @height: int number of grid height
 *
 * Return: pointer to a two dimentional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	 
	if (arr == NULL)
		return (NULL);

	for(i = 0; i< height; i++)
	{
		arr[i]= (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}


		for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);


	}
