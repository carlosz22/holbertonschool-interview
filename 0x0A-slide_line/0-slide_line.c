#include "slide_line.h"

/**
 * slide_line - slides and merges an array of integers
 *
 * @line: points to an array of integers
 * @size: Number of elements in array
 * @direction: can be either: SLIDE_LEFT, SLIDE_RIGHT
 * Return: 1 success, 0 Fail
 */
int slide_line(int *line, size_t size, int direction)
{

	if (direction != SLIDE_LEFT && direction != SLIDE_RIGHT)
		return (0);
	if (direction == SLIDE_LEFT)
		return (slide_line_left(line, size));
	return (slide_line_right(line, size));
}

/**
 * slide_line_left - slides and merges an array of integers to the left
 *
 * @line: points to an array of integers
 * @size: Number of elements in array
 * Return: 1 success, 0 Fail
 */
int slide_line_left(int *line, size_t size)
{
	int n1 = 0, n2 = 0;
	size_t left = 0, right;

	for (right = 0; right < size; right++)
	{
		if (line[right] != 0 && n1 == 0)
			n1 = line[right];
		else if (line[left] != 0 && n1 != 0)
			n2 = line[right];
		if (n1 != 0 && n2 != 0)
		{
			if (n1 == n2)
			{
				line[left++] = n1 + n2;
				n1 = 0;
				n2 = 0;
			}
			else
			{
				line[left++] = n1;
				n1 = n2;
				n2 = 0;
				if (right == size - 1)
					line[left++] = n1;
			}
		}
		else if (n1 != n2 && right == size - 1)
			line[left++] = n1;
	}
	for (right = left; right < size; right++)
		line[right] = 0;

	return (1);
}

/**
 * slide_line_right - slides and merges an array of integers to the right
 *
 * @line: points to an array of integers
 * @size: Number of elements in array
 * Return: 1 success, 0 Fail
 */
int slide_line_right(int *line, size_t size)
{
	int n1 = 0, n2 = 0;
	size_t right = size - 1, i;

	for (i = size - 1; i < size; i--)
	{
		if (line[i] != 0 && n1 == 0)
			n1 = line[i];
		else if (line[i] != 0 && n1 != 0)
			n2 = line[i];
		if (n1 != 0 && n2 != 0)
		{
			if (n1 == n2)
			{
				line[right--] = n1 + n2;
				n1 = 0;
				n2 = 0;
			}
			else
			{
				line[right--] = n1;
				n1 = n2;
				n2 = 0;
				if (i == 0)
					line[right--] = n1;
			}
		}
		else if (n1 != n2 && i == 0)
			line[right--] = n1;
	}
	for (i = 0; i < right + 1; i++)
		line[i] = 0;

	return (1);
}
