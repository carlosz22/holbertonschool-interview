#include "sandpiles.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Print a grid
 * @grid: Grid
 *
 * Return: Nothing
 */

static void print_grid(int grid[3][3])
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (j)
                printf(" ");
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
}

/**
 * sum_grids - Sums grids
 * @grid1: Grid 1
 * @grid2: Grid 2
 *
 * Return: Nothing
 */

int sum_grids(int grid1[3][3], grid2[3][3])
{

}
