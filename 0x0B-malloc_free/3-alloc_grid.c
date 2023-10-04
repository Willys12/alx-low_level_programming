#include "main.h"
/**
*alloc_grid - Returns a pointer to a 2D array.
*@width: First 2D array to be created.
*@height:2nd 2D array to be created.
*Return: NULL on failure.
*/
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}

