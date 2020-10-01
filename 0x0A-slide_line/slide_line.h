#ifndef SLIDE_LINE_H
#define SLIDE_LINE_H

#define SLIDE_LEFT 0
#define SLIDE_RIGHT 1
#include <stdio.h>

/* Function definitions */
int slide_line(int *line, size_t size, int direction);
int slide_line_left(int *line, size_t size);
int slide_line_right(int *line, size_t size);

#endif /* SLIDE_LINE_H */
